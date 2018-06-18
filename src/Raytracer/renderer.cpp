#include "renderer.hpp"
#include "ray.hpp"

#include "Image/color.hpp"
#include "Image/image.hpp"
#include "Scene/scene.hpp"
#include "Object/Shape/shape.hpp"
#include "Object/Camera/camera.hpp"
#include "Utils/sampler.hpp"

#include "spectral_pathtracer.hpp"

Renderer::Renderer(Scene *scene) : _scene(scene) {}

Renderer::~Renderer() {}

void Renderer::render_scene()
{
    Image *img { _scene->_output_img };
    double norm_i, norm_j;
    Vec3d towards_pixel;

    const Camera &c { camera(0) };

    unsigned nb_samples     { _scene->nb_samples()      };
    unsigned total_samples  { nb_samples*nb_samples     };
    const double range      { 1.0/(double)nb_samples    };

    Uniform<std::uniform_real_distribution, double> sampler(0.0, range);

    #pragma omp parallel for private(norm_i, norm_j, towards_pixel, uniform_sampler_double, sampler) schedule(dynamic)
    for (unsigned j = 0; j < img->height(); ++j)
    {
        for (unsigned i = 0; i < img->width(); ++i)
        {
            Color avg_color { Colors::BLACK };
            Spectrum<SPECTRAL_SAMPLES> spectral_radiance;

            for (double xsp = 0; xsp < 1.0; xsp += range)
            {
                for (double ysp = 0; ysp < 1.0; ysp += range)
                {
                    /* Using a stratified sampling instead of an uniform sampling
                     * TO-DO: use Poisson-disk / Sobol sequence instead ?
                     * See: Low-discrepancy sequence */
                    double u { total_samples > 1 ? sampler.sample() : 0.5 };
                    double v { total_samples > 1 ? sampler.sample() : 0.5 };

                    norm_i        = (i+xsp+u)/img->width()  - 0.5;
                    norm_j        = (j+ysp+v)/img->height() - 0.5;
                    towards_pixel = (norm_i * c.left()) + (norm_j * c.up())
                            + c.direction();

                    Ray ray(c.position(), towards_pixel.normalized());
                    avg_color += launch(ray);
                }
            }

            (*img)[i][j] = Colors::average(
                                avg_color, nb_samples*nb_samples).clamp();
        }
    }
}

Color Renderer::launch(Ray &ray)
{
    bool collides { false };

    if (depth_recursion_over(ray))
        return Colors::BLACK;

    for (auto itr = shapes().begin(); itr < shapes().end(); itr++)
        collides = (*itr)->intersect(ray) || collides;

    if (!collides)
        return Colors::BLACK;

    return compute_color(ray);
}

const std::vector<Shape*>& Renderer::shapes() const
{
    return _scene->shapes();
}

const std::vector<Light*>& Renderer::lights() const
{
    return _scene->lights();
}

const std::vector<Camera*>& Renderer::cameras() const
{
    return _scene->cameras();
}

Shape& Renderer::shape(unsigned i) const
{
    return *(shapes()[i]);
}

Light& Renderer::light(unsigned i) const
{
    return *(lights()[i]);
}

Camera& Renderer::camera(unsigned i) const
{
    return *(cameras()[i]);
}

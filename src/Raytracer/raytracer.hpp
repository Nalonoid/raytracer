#ifndef __RAYTRACER_HPP__
#define __RAYTRACER_HPP__

#include "renderer.hpp"

class Raytracer : public Renderer
{
public:
    Raytracer(Scene *scene);

    bool depth_recursion_over(Ray &ray) override;
    Color compute_color(Ray &ray) override;

private:
    const Color compute_blinn_phong(Ray &ray, const Color &obj_color) const;
    const Color compute_specular(Ray &ray, const Light &light) const;
    const Color compute_refl_refractive(Ray &ray);
};

#endif

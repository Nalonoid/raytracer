#include "metal.hpp"
#include "brdf.hpp"
#include "Utils/sampler.hpp"

Metal::Metal(float roughness, std::string name) :
    MaterialPBR(&BRDFs::IDEAL_SPECULAR, name),
    _roughness (roughness) {}

float Metal::roughness() const
{
    return _roughness;
}

Vec3d Metal::wi(const Vec3d &wo, Vec3d &normal) const
{   
    float u { uniform_sampler_float.sample() };

    if (u > _roughness)
        return wo.reflect(normal);
    else
        return Vec3d(rnd_dir_hemisphere(normal).normalized());
}

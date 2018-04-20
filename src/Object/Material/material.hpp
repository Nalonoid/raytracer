#ifndef __MATERIAL_HPP__
#define __MATERIAL_HPP__

#include "Image/color.hpp"

struct Material
{
    // Getters
    const Color& color()      const;
    double       shininess()  const;
    double       reflection() const;
    double       refraction() const;

    Color& color();

    std::string name() const;

    // Members
    std::string _name;
    Color   _color;
    double  _shininess;
    double  _reflection;
    double  _refraction;

    Material(Color c) :
        _name("default"), _color(c), _shininess(250), _reflection(0.2),
        _refraction(1.5) {}

    Material(std::string name, Color c, double sh, double refl, double refr) :
        _name(name), _color(c), _shininess(sh), _reflection(refl),
        _refraction(refr) {}
};

namespace Materials
{

const struct Material DEFAULT       { "default",     Colors::MAROON, 200.0, 0.01, 0.000 };
const struct Material PLASTIC       { "plastic",     Colors::CYAN,   200.0, 0.30, 0.000 };
const struct Material METAL         { "metal",       Colors::CYAN,    10.0, 0.70, 0.000 };
const struct Material GLASS         { "glass",       Colors::CYAN,    50.0, 0.50, 1.500 };
const struct Material DIFFUSE       { "diffuse",     Colors::BLUE,     0.0, 0.00, 0.000 };
const struct Material GLOSSY        { "glossy",      Colors::WHITE,   25.0, 0.90, 2.417 };
const struct Material TRANSLUCENT   { "translucent", Colors::WHITE,  100.0, 0.90, 1.020 };

}

#endif

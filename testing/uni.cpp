#include "testing.h"

int uni_abs(double re, double im, ComplexNumber _true)
{
    ComplexNumber z(re, im);
    std::cout << "uni_abs " << z.abs() << std::endl;
    return 0;
}

int uni_arg(double re, double im, ComplexNumber _true)
{
    ComplexNumber z(re, im);
    std::cout << "uni_arg " << z.arg() * 180 / M_PI << std::endl;
    return 0;
}

int uni_rot(double re, double im, double angle, ComplexNumber _true)
{
    ComplexNumber z(re, im);
    z.rotate(angle);
    std::cout << "uni_rot " << z.Re << "    " << z.Im << std::endl;
    return 0;
}

int uni_str(double re, double im, double stretchRe, double stretchIm, ComplexNumber _true)
{
    ComplexNumber z(re, im);
    z.stretch(stretchIm, stretchRe);
    std::cout << "uni_str " << z.Re << "    " << z.Im << std::endl;
    return 0;
}

int uni_pow(double re, double im, double pow, ComplexNumber _true)
{
    ComplexNumber z(re, im);
    z.power(pow);
    std::cout << "uni_pow " << z.Re << "    " << z.Im << std::endl;
    return 0;
}

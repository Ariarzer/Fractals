#include "testing.h"

int uni_abs(double re, double im)
{
    Z z(re, im);
    std::cout << "uni_abs " << z.abs() << std::endl;
    return 0;
}

int uni_arg(double re, double im)
{
    Z z(re, im);
    std::cout << "uni_arg " << z.arg() * 180 / M_PI << std::endl;
    return 0;
}

int uni_rot(double re, double im, double angle)
{
    Z z(re, im);
    Z tmp = z.rotate(angle);
    std::cout << "uni_rot " << tmp.Re << "    " << tmp.Im << std::endl;
    return 0;
}

int uni_str(double re, double im, double stretchRe, double stretchIm)
{
    Z z(re, im);
    Z tmp = z.stretch(stretchIm, stretchRe);
    std::cout << "uni_str " << tmp.Re << "    " << tmp.Im << std::endl;
    return 0;
}

int uni_pow(double re, double im, double pow)
{
    Z z(re, im);
    Z tmp = z.power(pow);
    std::cout << "uni_pow " << tmp.Re << "    " << tmp.Im << std::endl;
    return 0;
}

#include "testing.h"

int uni_abs()
{
    ComplexNumber z[3] = {(0., 0.), (1., 1.), (1. ,1.)};
    for(int i = 0; i < 3; i++)
    {
        std::cout << "uni_abs " << z[i].abs() << std::endl;
    }
    return 0;
}

int uni_arg()
{
    ComplexNumber z[3] = {(0., 0.), (1., 1.), (1. ,1.)};
    for(int i = 0; i < 3; i++)
    {
        std::cout << "uni_arg " << z[i].arg() * 180 / M_PI << std::endl;
    }
    return 0;
}

int uni_rot()
{
    ComplexNumber z[3] = {(0., 0.), (1., 1.), (1. ,1.)};
    for(int i = 0; i < 3; i++)
    {
        z[i].rotate(45);
        std::cout << "uni_rot " << z[i].Re << "    " << z[i].Im << std::endl;
    }
    return 0;
}

int uni_str()
{
    ComplexNumber z[3] = {(0., 0.), (1., 1.), (1. ,1.)};
    for(int i = 0; i < 3; i++)
    {
        z[i].stretch(2, 1);
        std::cout << "uni_str " << z[i].Re << "    " << z[i].Im << std::endl;
    }
    return 0;
}

int uni_pow()
{
    ComplexNumber z[3] = {(0., 0.), (1., 1.), (1. ,1.)};
    for(int i = 0; i < 3; i++)
    {
        z[i].power(2);
        std::cout << "uni_pow " << z[i].Re << "    " << z[i].Im << std::endl;
    }
    return 0;
}

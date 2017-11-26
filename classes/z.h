#ifndef Z_H
#define Z_H

#include <../stdafx.h>

class Z
{
public:
    double Re;
    double Im;

    Z (double Re, double Im);
    double abs();
    double arg();
    Z power(int n);
    Z rotate(double angle);
    Z stretch(double s_Re, double s_Im);
};

#endif // Z_H

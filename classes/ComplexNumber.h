#ifndef Z_H
#define Z_H

#include <../stdafx.h>

class ComplexNumber
{
public:
    double Re;
    double Im;

    ComplexNumber (double Re, double Im);
    double abs();
    double arg();
    int power(int n);
    int rotate(double angle);
    int stretch(double s_Re, double s_Im);
};

#endif // Z_H

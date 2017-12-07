#include "ComplexNumber.h"

ComplexNumber::ComplexNumber(double Re, double Im)
{
    this->Re = Re;
    this->Im = Im;
}

double ComplexNumber::abs()
{
    return sqrt(this->Im * this->Im + this->Re * this->Re);
}

double ComplexNumber::arg()
{
    return atan2((this->Im) / this->abs(), (this->Re) / this->abs());
}

int ComplexNumber::power(int n)
{
    this->Re = pow(this->abs(), n) * cos(this->arg() * n);
    this->Im = pow(this->abs(), n) * sin(this->arg() * n);
    return 0;
}

int ComplexNumber::rotate(double angle)
{
    double rot = angle *  M_PI / 180;
    this->Re =  this->Re * cos(rot) - this->Im * sin(rot);
    this->Im =  this->Re * sin(rot) + this->Im * cos(rot);
    return 0;
}

int ComplexNumber::stretch(double s_Re, double s_Im)
{
    this->Re = this->Re * s_Re;
    this->Im = this->Im * s_Im;
    return 0;
}

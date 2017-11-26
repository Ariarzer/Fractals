#include "z.h"

Z::Z(double Re, double Im)
{
    this->Re = Re;
    this->Im = Im;
}

double Z::abs()
{
    return sqrt(this->Im * this->Im + this->Re * this->Re);
}

double Z::arg()
{
    return atan2((this->Im) / this->abs(), (this->Re) / this->abs());
}

Z Z::power(int n)
{
    Z tmp(pow(this->abs(), n) * cos(this->arg() * n) , pow(this->abs(), n) * sin(this->arg() * n));
    return tmp;
}

Z Z::rotate(double angle)
{
    double rot = angle *  M_PI / 180;
    Z tmp(this->Re * cos(rot) - this->Im * sin(rot) ,
          this->Re * sin(rot) + this->Im * cos(rot));
    return tmp;
}

Z Z::stretch(double s_Re, double s_Im)
{
    Z tmp(this->Re * s_Re, this->Im * s_Im);
    return tmp;
}

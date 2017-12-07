#include "fractal.h"

void mandelbrot(std::ostream &file, int resolution, int pow, double rot, double s_Re, double s_Im)
{
    ComplexNumber z(0, 0), c(0, 0), tmp(0, 0);
    double b = (double)(resolution / 2);
    for(int x = - resolution; x < resolution; x++)
    {
        if(!(x % (resolution / 10))) std::cout << x << std::endl;
        for(int y = - resolution; y < resolution; y++)
        {
            z.Re = x / b;
            z.Im = y / b;
            c = z;
            for(int i = 0; i < 100; i++)
            {
                z.power(pow);
                tmp = z;
                z.Im = tmp.Im + c.Im;
                z.Re = tmp.Re + c.Re;
                if(z.abs() > 5)
                {
                    tmp.Re = x;
                    tmp.Im = y;
                    tmp.rotate(rot);
                    tmp.stretch(s_Re, s_Im);
                    file << tmp.Re / b << " " << tmp.Im / b << " " << sin(i / 100.) << std::endl;
                    break;
                }
            }
            if(z.abs() < 5)
            {
                tmp.Re = x;
                tmp.Im = y;
                tmp.rotate(rot);
                tmp.stretch(s_Re, s_Im);
                file << tmp.Re / b << " " << tmp.Im / b << " " << 0 << std::endl;
            }
        }
        file << std::endl;
    }
}

void julia(std::ostream &file, int resolution, int pow, ComplexNumber c, double rot, double s_Re, double s_Im)
{
    ComplexNumber z(0, 0) , tmp(0, 0);
    double b = (double)(resolution / 2);
    for(int x = - resolution; x < resolution; x++)
    {
        if(!(x % (resolution / 10))) std::cout << x << std::endl;
        for(int y = - resolution; y < resolution; y++)
        {
            z.Re = x / b;
            z.Im = y / b;
            for(int i = 0; i < 100; i++)
            {
                z.power(pow);
                tmp = z;
                z.Im = tmp.Im + c.Im;
                z.Re = tmp.Re + c.Re;
                if(z.abs() > 5)
                {
                    tmp.Re = x;
                    tmp.Im = y;
                    tmp.rotate(rot);
                    tmp.stretch(s_Re, s_Im);
                    file << tmp.Re / b << " " << tmp.Im / b << " " << sin(i / 100.) << std::endl;
                    break;
                }
            }
            if(z.abs() < 5)
            {
                tmp.Re = x;
                tmp.Im = y;
                tmp.rotate(rot);
                tmp.stretch(s_Re, s_Im);
                file << tmp.Re / b << " " << tmp.Im / b << " " << 0 << std::endl;
            }
        }
        file << std::endl;
    }
}

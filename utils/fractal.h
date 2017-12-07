#ifndef FRACTAL
#define FRACTAL

#include "../classes/ComplexNumber.h"
#include "../stdafx.h"

void mandelbrot(std::ostream &file, int resolution, int pow, ComplexNumber c, double rot, double s_Re, double s_Im);
void julia(std::ostream &file, int resolution, int pow, ComplexNumber c, double rot, double s_Re, double s_Im);

#endif // FRACTAL


#ifndef FRACTAL
#define FRACTAL

#include "../classes/z.h"
#include "../stdafx.h"

void mandelbrot(std::ostream &file, int resolution, int pow);
void julia(std::ostream &file, int resolution, int pow, Z c);

#endif // FRACTAL


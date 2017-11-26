#include "stdafx.h"

#include "classes/z.h"
#include "testing/testing.h"
#include "utils/fractal.h"

int main()
{
    Z c(0.285, 0.01);
    std::fstream file("fractal.dat", std::ios_base::out);
    if (!file.is_open())
        std::cout << "Error open data-file." << std::endl;
//    mandelbrot(file, 1000, 2);
    julia(file, 1000, 2, c);
    file.close();
    return 0;
}

#include "stdafx.h"

#include "classes/ComplexNumber.h"
#include "testing/testing.h"
#include "utils/fractal.h"

int main()
{
    ComplexNumber c(0, 1);
    std::fstream file("../data/fractal.dat", std::ios_base::out);
    if (!file.is_open())
        std::cout << "Error open data-file." << std::endl;
    //julia(file, 100, 2, c, 45.0, 3, 0.7);
    file.close();
    test();
    return 0;
}

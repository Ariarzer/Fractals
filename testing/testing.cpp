#include "testing.h"

int test()
{
    std::vector<ComplexNumber> trueSample;
    ComplexNumber test(0,0);
    std::ifstream file("testsample.dat", std::ios_base::in);
    if (!file.is_open())
    {
        std::cout << "Error load test sample." << std::endl;
        return 0;
    }
    file >> test.Re >> test.Im;
    ComplexNumber tmp(0,0);
    while (file >> tmp.Re >> tmp.Im) trueSample.push_back(tmp);
    file.close();

    uni_abs(test.Re, test.Im, trueSample[0]);
    uni_arg(test.Re, test.Im, trueSample[1]);
    uni_arg(test.Re, test.Im, trueSample[2]);
    uni_rot(test.Re, test.Im, 45, trueSample[3]);
    uni_str(test.Re, test.Im, 1, 2, trueSample[4]);
    uni_pow(test.Re, test.Im, 3, trueSample[5]);

    return 0;
}

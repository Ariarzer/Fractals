#include "testing.h"

int test()
{

//    std::fstream file("testsample_true.dat", std::ios_base::in);
//    if (!file.is_open())
//        std::cout << "Error load test sample." << std::endl;

    uni_abs(0.3, 0.7);
    uni_arg(0.3, 0.7);
    uni_arg(-0.4, 0.7);
    uni_rot(0.3, 0.7, 45);
    uni_str(0.3, 0.7, 1, 2);
    uni_pow(0.3, 0.7, 3);

    return 0;
}

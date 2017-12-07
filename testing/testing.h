#ifndef TESTING
#define TESTING

#include "../classes/ComplexNumber.h"
#include "../stdafx.h"

int uni_abs(double re, double im, ComplexNumber _true);
int uni_arg(double re, double im, ComplexNumber _true);
int uni_rot(double re, double im, double rot,  ComplexNumber _true);
int uni_str(double re, double im, double stretchRe, double stretchIm,  ComplexNumber _true);
int uni_pow(double re, double im, double pow,  ComplexNumber _true);

int test();

#endif // TESTING


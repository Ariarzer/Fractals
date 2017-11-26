#ifndef TESTING
#define TESTING

#include "../classes/z.h"
#include "../stdafx.h"

int uni_abs(double re, double im);
int uni_arg(double re, double im);
int uni_rot(double re, double im, double rot);
int uni_str(double re, double im, double stretchRe, double stretchIm);
int uni_pow(double re, double im, double pow);

int test();

#endif // TESTING


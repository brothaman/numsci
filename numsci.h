#ifndef numsci_h_
#define numsci_h_

#include <stdio.h>
#include <math.h>
#include <assert.h>

#define H 0.001

// compute the first order derivative via central difference method
double diffOne(double (*function)(double x, double h), int x);

// compute the second order derivative via central difference method
double diffTwo(double (*function)(double x, double h), int x);

// compute the third order derivative via central difference method
double diffThree(double (*function)(double x, double h), int x);

// compute the fourth order derivative via central difference method
double diffFour(double (*function)(double x, double h), int x);

// use the previous methods
double diff(double (*function)(double x, double h), int x, int order);

#endif

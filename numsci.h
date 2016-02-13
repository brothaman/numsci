#ifndef numsci_h_
#define numsci_h_

#include <stdio.h>
#include <math.h>
#include <assert.h>

#define H 0.001

double diffOne(double (*function)(double x, double h), int x);

double diffTwo(double (*function)(double x, double h), int x);

double diffThree(double (*function)(double x, double h), int x);

double diffFour(double (*function)(double x, double h), int x);

double diff(double (*function)(double x, double h), int x, int order);

#endif
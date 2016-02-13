#include "numsci.h"

double function(double x, double h)
{
	double func = pow(x+h, 4);
	return func;
}

int main()
{
	double diff2 = diff(function, 4, 2);
	printf("2nd Derivative = %f\n", diff2);

	return 0;
}
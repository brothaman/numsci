#include "numsci.h"

#define H 0.001

double diffOne(double (*function)(double x, double h), int x)
{
	return ((*function)(x,H) - (*function)(x, -H)) / (2*H);
}

double diffTwo(double (*function)(double x, double h), int x)
{
	return ((*function)(x,H) - 2*((*function)(x,0)) + 
			(*function)(x, -H)) / pow(H,2);
}

double diffThree(double (*function)(double x, double h), int x)
{
	return ((*function)(x,2*H) - 2*((*function)(x,H)) +2*((*function)(x,-H)) - 
			((*function)(x,-2*H))) / (2*pow(H,3));
}

double diffFour(double (*function)(double x, double h), int x)
{
	return ((*function)(x,2*H) - 4*((*function)(x,H)) + 6*((*function)(x,0))
			 - 4*((*function)(x,-H)) + (*function)(x,-2*H)) / pow(H, 4);
}

double diff(double (*function)(double x, double h), int x, int order)
{
	assert (order <= 4);

	switch (order)
	{
		case 1:
		{
			return diffOne(function, x);
			break;
		}

		case 2:
		{
			return diffTwo(function, x);
			break;
		}

		case 3:
		{
			return diffThree(function, x);
			break;
		}

		case 4:
		{
			return diffFour(function, x);
			break;
		}
	}
}



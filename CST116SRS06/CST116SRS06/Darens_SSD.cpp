#include "stdafx.h"
#include <cmath>
#include <iostream>
#include "Darens_SSD.h"

double Darens_SSD(const size_t sizedarray, const int darray[])
{
	double total = 0;
	double mean = {};
	double y = {};
	double meann = {};

	for (int t = 0; t < sizedarray; t++)
	{
		total += darray[t];

	}

	mean = total / sizedarray;


	for (int t = 0; t < sizedarray; t++)
	{
		y = darray[t] - mean;
		meann += y * y;

	}

	double s = {};
	s = sqrt((meann) / (sizedarray - 1));
	


	return s;
}
#include "stdafx.h"
#include <cmath>
#include "IansStdDev.h"

double iansStdDev(const size_t size, const int someArray[])
{
	// calculate mean
	double mean1{};
	double mean2{};
	for (size_t i{ 0 }; i != size; ++i)
	{
		mean1 += someArray[i];
	}
	mean1 /= size;

	for (size_t i{ 0 }; i != size; ++i)
	{
		// subtract the mean1 from each value
		const double val{ someArray[i] - mean1 };
		// square it
		mean2 += (val*val);
	}
	// mean of the squares
	mean2 /= size-1;

	// return the square root of mean2 (or the sample standard deviation)
	return sqrt(mean2);
}
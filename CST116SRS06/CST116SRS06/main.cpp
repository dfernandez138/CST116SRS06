// main.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <cmath>
#include <iomanip>
#include <iostream>
#include <cstring>
#include "Darens_SSD.h"
#include "IansStdDev.h"



int main()
{
	int darray[] = { 48, 69, 8, 12, 32, 78, 11, 23, 96, 13, 7, 3, 5, 9, 19, 25, 5, 73, 6, 49, 64, 77, 16, 14, 1 };
	int parray[] = { 12, 13, 334, 45, 65, 0, 22, 32, 65, 89, 74, 17, 9, 147, 15, 14, 85, 25, 36, 25, 21 };
	int sizeparray = sizeof parray / sizeof parray[0];
	int sizedarray = sizeof darray / sizeof darray[0];


	double a{ Darens_SSD(sizedarray, darray) };
	double b{ iansStdDev(sizedarray, darray) };
	double c{ Darens_SSD(sizeparray, parray) };
	double d{ iansStdDev(sizeparray, parray) };

	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;
	std::cout << d << std::endl;

	if ((abs(a - b)) > 0.0001) std::cout << "Results a-b don't match, homie";
	else std::cout << "Results a-b match!"<< std::endl;

	if ((abs(c - d)) > 0.0001) std::cout << "Results c-d don't match, homie";
	else std::cout << "Results c-d match!" <<std::endl;

	return 0;
}


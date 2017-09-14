// GreatestCommonDivisor.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>


int GreatestCommonDivisor(int value1, int value2) {
	int a;
	while (value2) {
		a = value1 % value2;
		value1 = value2;
		value2 = a;
	}
	return abs(a);
}

int ext_GreatestCommonDivisor(int value1, int value2, int& x, int& y) {
	int q, r, x1, y1, x2, y2, d;
	if (value2 == 0) {
		d = value1;
		x = 1;
		y = 0;
		return d;
	}
	x2 = 1, x1 = 0, y2 = 0, y1 = 1;
	while (value2 > 0) {
		q = value1 / value2;
		r = value1 - q * value2;
		x = x2 - q * x1;
		y = y2 - q * y1;
		value1 = value2;
		value2 = r;
		x2 = x1;
		x1 = x;
		y2 = y1;
		y1 = y;
	}
	d = value1, x = x2, y = y2;
	return abs(d);
}


int main()
{
	int value1, value2, x, y;
	char flag = 'y';
	std::cout << "Find Greatest Common Divisor\n";
	while (flag == 'y' || flag == 'Y') {
		std::cout << "Input value 1: \n";
		std::cin >> value1;
		std::cout << "Input value 2: \n";
		std::cin >> value2;
		std::cout << "GCD(" << value1 << "," << value2 << ") = " << ext_GreatestCommonDivisor(value1, value2, x, y) << std::endl;
		std::cout << "x = " << x << std::endl;
		std::cout << "y = " << y << std::endl;
		std::cout << "Input [y] for continue: ";
		std::cin >> flag;
	}
	return 0;

	getchar();
	getchar();
}


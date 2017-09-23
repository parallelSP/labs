// Euler'sTotientFunction.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int phi(int n) {
	int result = n;
	for (int i = 2; i*i <= n; ++i)
		if (n % i == 0) {
			while (n % i == 0)
				n /= i;
			result -= result / i;
		}
	if (n > 1)
		result -= result / n;
	return result;
}

int main()
{
	int value;
	std::cout << "Enter value: ";
	std::cin >> value;

	int result = phi(value);
	std::cout <<"Result: " << result; 

	getchar();
	getchar();
    return 0;
}


#include "stdafx.h"
#include <iostream>

int main()
{
	double sum = 1;
	int n;
	int sign = 1;
	std::cin >> n;
	for (int i = 1; i < (n + 1); i++) {
		sign *= -1;
		sum += (sign*1.0 / (2.0* double(i) +1));
	}
	sum *= 4;
	std::cout << sum;
	system("pause");
}
// task8.cpp : Defines the entry point for the console application.

//#include "stdafx.h"
#include <iostream>

int main()
{
	double a, b, c;
	std::cin >> a >> b >> c;
	double temp;
	if (a>c)
	{
		temp = c;
		c = a;
		a = temp; 
	}
	if (b>c) 

	{
		temp = c;
		c = b;
		b = temp;
	}

	if (((a + b) <= c) || (a <= 0) || (b <= 0) || (a <= 0)) std::cout << "impossible";
	else
	{
		if ((a*a + b*b) < (c*c))
			std::cout << "obtuse";
		else if ((a*a + b*b) > (c*c))
			std::cout << "acute";
		else std::cout << "right";
	}

	system("pause");

	return 0;
}
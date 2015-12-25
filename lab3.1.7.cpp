// task7.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include "iostream"
#include "cmath"

using namespace std;

int main()
{
	double 
		a, b, c;

	cin >> a;
	cin >> b;
	cin >> c;

	double
		D = b * b - 4.0 * a * c;

	if (D > 0)
	{
		double x1 = (-b + sqrt(D)) / (2.0 * a);
		double x2 = (-b - sqrt(D)) / (2.0 * a);
		cout << x2 << " " << x1 << endl;
	}
	else if (D == 0)
	{
		double x = -b / (2.0 * a);
		cout << x << endl;
	}

	system("pause");

	return 0;
}


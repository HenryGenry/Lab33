// task2.6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int n, k;
	int fac1, fac2, fac3; 
	double C;
	cin >> n >> k;

	for (int i = 1; i <= n; i++) {
		fac1 *= i;
	}
	for (int i = 1; i <= k; i++) {
		fac2 *= i;
	}
	for (int i = 1; i <= n - k; i++) {
		fac3 *= i;
	}
	C = fac1 / (fac2 * fac3);
	return 0;
}


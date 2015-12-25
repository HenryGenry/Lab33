// taask2.5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int n, fac = 1;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		fac *= i;
	}
	cout << fac << endl;
	system("pause");
	return 0;
}


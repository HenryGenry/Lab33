// task2.1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int n;
	double sum = 0;

	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		sum += pow(i, 2);
	}
	
	cout << sum << endl;

	system("pause");

	return 0;
}


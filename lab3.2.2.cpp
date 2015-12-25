// task2.2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int sum = 0, n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{ 
		sum += i * (i + 1);
	}
	cout << sum << endl;
	system("pause");
	return 0;
}


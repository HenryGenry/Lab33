// task6.cpp : Defines the entry point for the console application.
//

//#include "stdafx.h"
#include "iostream"

using namespace std;

int main()
{
	int a, b;
	int _a, _b;

	cin >> a;
	cin >> b;
	cin >> _a;
	cin >> _b;

	if (a == _a || b == _b)
	{
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
	}
	system("pause");
	return 0;
}


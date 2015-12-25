// task5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int num1, num2, num3;
	cin >> num1;
	cin >> num2;
	cin >> num3;
	if ((num1 == num2) & (num2 == num3))
	{
		cout << 3 << endl;
		
	}
	else if (num1 == num2 || num1 == num3 || num2 == num3)
	{
		cout << 2 << endl;

	}
	else
		cout << 0 << endl;
	system("pause");
	return 0;
}


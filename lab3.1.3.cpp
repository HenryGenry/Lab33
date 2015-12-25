// task3.cpp : Defines the entry point for the console application.
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
	int max = num1;
	if (max < num2)
	{
		max = num2;
	}
	if (max < num3)
	{
		max = num3;
	}
	cout << max << endl;
	system("pause");
	return 0;
}


// task4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int num;
	cin >> num;
	if (num > 0)
	{
		cout << 1 << endl;
	}
	else if (num < 0)
	{
		cout << -1 << endl;
	}
	else
		cout << 0 << endl;
	system("pause");
	return 0;
}


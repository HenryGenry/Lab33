// task2.3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int a;
	int b;
	cin >> a >> b;
	for (int i = a; i <= b; i++)
	{
		if (i % 2 == 0)
			cout << i << endl;
	}
	system("pause");
	return 0;
}


// taask2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int n;
	int m;
	cin >> n;
	cin >> m;
	if (n > m)
	{
		cout << 1 << endl;
	}
	else if (n == m)
	{
		cout << 0 << endl;
	}
	else
		cout << 2 << endl;
	system("pause");
	return 0;
}


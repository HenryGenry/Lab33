// taask2.3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int n, sum = 0, sum2 = 0;
	cin >> n;
	for (int i = 0; i <= n; i++)
	{
		sum2 += i;
		sum += sum2;
	}
	cout << sum << endl;
	system("pause");
	return 0;
}


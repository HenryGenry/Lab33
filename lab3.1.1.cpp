#include "stdafx.h"
#include "iostream"

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int num1;
	int num2;
	cin >> num1;
	cin >> num2;
	if (num1 > num2)
	{
		cout << num1 << endl;
	}
	else
		cout << num2 << endl;
	system("pause");
	return 0;
}


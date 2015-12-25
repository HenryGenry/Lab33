// task9.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"

using namespace std;

int main()
{
	int n;
	
	cin >> n;

	int one_trip = 0, ten_trip = 0, fourty_trip = 0;

	int _tmp;

	if (n * 15 > 440)
	{
		fourty_trip = n * 15 / 440;
		_tmp = n * 15 % 440;

		if (_tmp > 125)
		{
			ten_trip = _tmp / 125;
			_tmp = _tmp % 125;
		}
		if (_tmp > 15)
		{
			one_trip = _tmp / 15;
		}
	}
	cout << one_trip << " " << ten_trip << " " << fourty_trip << endl;
	system("pause");
	return 0;
}


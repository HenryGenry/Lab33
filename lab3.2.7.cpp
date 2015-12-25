#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int a, n, result = 1;
	cin >> a >> n;
	if (n % 2 == 0)
		for (int i = 0; i < n; i++) {
			result *= a;
		}
	else {
		for (int i = 0; i < n - 1; i++) {
			result *= a;
		}
		result *= a;
	}
	cout << result << '\n';
	system("pause");
}
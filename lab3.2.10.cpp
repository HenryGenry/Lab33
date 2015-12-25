#include "stdafx.h"
#include <iostream>

int main()
{
	double sum = 1;
	double a;
	int n;
	std::cin >> a >> n;
	double acur = a;
	for (int i = 1; i < (n + 1); i++) {
		sum += acur;
		acur *= a;
	}
	std::cout << sum;
	system("pause");
}
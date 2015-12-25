#include "stdafx.h"
#include <iostream>

int main()
{
	for (int i = 10; i<100; i++)
		if (((i%10)*(i/10))*2 == i)
			std::cout << i << " "; 
	system("pause");
}
#include <iostream>
#include <cmath>
#include "FirstLabTasks.h"

using namespace std;

double GetPower_1_1_3_1(double base, int exponent)
{
	if (exponent == 0)
	{
		return 1;
	}
	if (exponent % 2 == 0)
	{
		return GetPower_1_1_3_1(base * base, exponent / 2);
	}
	return base * GetPower_1_1_3_1(base, exponent - 1);
}

void Task_1_1_3_1()
{
	return;
}

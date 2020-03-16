#include <iostream>
#include <cmath>
#include "FirstLabTasks.h"

using namespace std;

double GetPower_1_1_3_2(double base, int exponent)
{
	if (exponent == 0)
	{
		return 1;
	}
	if (exponent % 2 == 0)
	{
		return GetPower_1_1_3_2(base * base, exponent / 2);
	}
	return base * GetPower_1_1_3_2(base, exponent - 1);
}

void Task_1_1_3_2()
{
	cout << "2.0 ^ 9 = " << GetPower_1_1_3_2(2.0, 9) << endl;
	cout << "3.0 ^ 7 = " << GetPower_1_1_3_2(3.0, 7) << endl;
	cout << "-10.0 ^ 3 =" << GetPower_1_1_3_2(-10.0, 3) << endl;
}

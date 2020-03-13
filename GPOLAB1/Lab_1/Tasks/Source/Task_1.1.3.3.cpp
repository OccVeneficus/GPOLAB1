#include <iostream>
#include "../Header/FirstLabTasks.h"
using namespace std;

double GetPower_1_1_3_3(double, int);
void DemoGetPower_1_1_3_3(double, int);

void Task_1_1_3_3()
{
	DemoGetPower_1_1_3_3(5.0, 8);
	DemoGetPower_1_1_3_3(3.0, 5);
	DemoGetPower_1_1_3_3(-12.0, 2);
}

double GetPower_1_1_3_3(double base, int exponent)
{
	if (exponent == 0)
	{
		return 1;
	}
	if (exponent % 2 == 0)
	{
		return GetPower_1_1_3_3(base * base, exponent / 2);
	}
	return base * GetPower_1_1_3_3(base, exponent - 1);
}

void DemoGetPower_1_1_3_3(double base, int exponent)
{
	cout << base << " ^ " << exponent << " = " << GetPower_1_1_3_3(base, exponent) << endl;
}

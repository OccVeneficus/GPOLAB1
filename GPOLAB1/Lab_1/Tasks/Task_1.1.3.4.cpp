#include <iostream>
#include "FirstLabTasks.h"

using namespace std;

void RoundToTens_1_1_3_4(int&);

void Task_1_1_3_4()
{
	int a = 137;
	cout << "For " << a << "rounded value is ";
	RoundToTens_1_1_3_4(a);
	cout << a << endl;
	a = 232;
	cout << "For " << a << "rounded value is ";
	RoundToTens_1_1_3_4(a);
	cout << a << endl;
	a = 17;
	cout << "For " << a << "rounded value is ";
	RoundToTens_1_1_3_4(a);
	cout << a << endl;
}

void RoundToTens_1_1_3_4(int& value)
{
	if (value % 10 < 5)
	{
		value = (value / 10) * 10;
	}
	else
	{
		value = ((value / 10) + 1) * 10;
	}
}

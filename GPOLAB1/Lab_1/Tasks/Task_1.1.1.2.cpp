#include <iostream>
#include "FirstLabTasks.h"

using namespace std;

void Breakpoints_1_1_1_2()
{
	double add = 1.0;
	double sum = 0.0;
	for (int i = 0; i < 1000; i++)
	{
		sum += add * i;
		if (i % 3 == 0)
		{
			add *= 1.1;
		}
		else
		{
			add /= 3.0;
		}
	}
	cout << "Total sum is " << sum << endl;
}

void Task_1_1_1_2()
{
	Breakpoints_1_1_1_2();
}

//sum on 777 iteration = 3.2624579394327844
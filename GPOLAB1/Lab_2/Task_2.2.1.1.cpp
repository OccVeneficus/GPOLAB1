#include "../Header/SecondLabTasks.h"
#include "../../Common/ConsoleOutput/ConsoleOutput.h"
#include <exception>

void Sort_2_2_1_1(double* values, int count)
{
	if (count <= 0)
	{
		throw "Error. Negative count.";
	}
	double swap;
	for (int i = 0; i < count; i++)
	{
		for (int j = 0; j < count; j++)
		{
			if (values[i] < values[j])
			{
				swap = values[i];
				values[i] = values[j];
				values[j] = swap;
			}
		}
	}
}

void DemoSort_2_2_1_1()
{
	int count = 5;
	double* values = new double[count] {100.0, 249.0, 12.0, 45.0, 23.5};
	Sort_2_2_1_1(values, count);
	count = -1;
	Sort_2_2_1_1(values, count);
}

void Task_2_2_1_1()
{
	DemoSort_2_2_1_1();
}
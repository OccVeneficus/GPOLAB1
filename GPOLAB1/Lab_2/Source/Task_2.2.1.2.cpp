#include "../Header/SecondLabTasks.h"
#include "../../Common/ConsoleOutput/ConsoleOutput.h"

void Sort_2_2_1_2(double* values, int count)
{
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

void DemoSort_2_2_1_2()
{
	int count = 5;
	double* values = new double[count] {100.0, 249.0, 12.0, 45.0, 23.5};

	Sort_2_2_1_2(values, count);
}

void Task_2_2_1_2()
{
	return;
}
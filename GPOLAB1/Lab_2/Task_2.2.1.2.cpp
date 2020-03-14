#include "SecondLabTasks.h"
#include "../Common/ConsoleOutput/ConsoleOutput.h"
#include <exception>

using namespace std;

void Sort_2_2_1_2(double* values, int count)
{
	if (count <= 0)
	{
		throw exception("Error. Negative count.");
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

void DemoSort_2_2_1_2()
{
	int count = 5;
	double* values = new double[count] {100.0, 249.0, 12.0, 45.0, 23.5};
	Sort_2_2_1_2(values, count);

	count = -1;
	try
	{
		Sort_2_2_1_2(values, count);
	}
	catch (exception)
	{
		cout << "Exception catched!" << endl;
	}
}

void Task_2_2_1_2()
{
	cout << "Task 2.2.1.2;" << endl;
	DemoSort_2_2_1_2();
}
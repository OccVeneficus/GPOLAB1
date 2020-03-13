#include <iostream>
#include "../Header/FirstLabTasks.h"

using namespace std;

int* ReadArray_1_1_5_8(int count)
{
	cout << "Enter array of " << count << " values: " << endl;
	int* values = new int[count];
	for (int i = 0; i < count; i++)
	{
		cin >> values[i];
	}
	return values;
}

int CountPositiveValues_1_1_5_8(int* values, int count)
{
	int result = 0;
	for (int i = 0; i < count; i++)
	{
		if (values[i] > 0)
		{
			result++;
		}
	}
	return result;
}

void Task_1_1_5_8()
{
	int count = 15;
	int* values = ReadArray_1_1_5_8(count);
	cout << "Count is: " << CountPositiveValues_1_1_5_8(values, count) << endl;
	count = 20;
	/*ОШИБКА перед тем как переприсвоить указатель на новый массив, старый надо удалить*/
	delete[] values;
	values = ReadArray_1_1_5_8(count);
	cout << "Count is: " << CountPositiveValues_1_1_5_8(values, count) << endl;
	delete[] values;
}
//changes
#include <iostream>
#include "../Header/FirstLabTasks.h"

using namespace std;

void Task_1_1_5_2()
{
	int size = 8;
	bool* testArray = new bool[size];
	for (int i = 0; i < size; i++)
	{
		testArray[i] = rand() % 2;
	}
	cout << "Array of double: " << endl;
	for (int i = 0; i < size; i++)
	{
		if (testArray[i])
		{
			cout << " true ";
		}
		else
		{
			cout << " false ";
		}
	}
	delete[] testArray;
}
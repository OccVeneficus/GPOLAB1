#include <iostream>
#include "../Header/FirstLabTasks.h"

using namespace std;

void Sort_1_1_5_4(double* userArray, int arrayLength)
{
	int temporaryElement = 0;
	for (int i = 0; i < arrayLength; i++) 
	{
		for (int j = (arrayLength - 1); j >= (i + 1); j--) 
		{
			if (userArray[j] < userArray[j - 1]) 
			{
				temporaryElement = userArray[j];
				userArray[j] = userArray[j - 1];
				userArray[j - 1] = temporaryElement;
			}
		}
	}
}

void Task_1_1_5_4()
{
	int size = 10;
	double* testArray = new double[size];
	for (int i = 0; i < size; i++)
	{
		testArray[i] = static_cast <double> (rand()) / (static_cast <double> (RAND_MAX / 100));
	}

	/*Array print*/
	cout << endl << "Array of double:" << endl;
	for (int i = 0; i < size; i++)
	{
		cout << " " << testArray[i];
	}

	Sort_1_1_5_4(testArray, size);

	/*Print sorted array*/
	cout << endl << "Sorted Array of double:" << endl;
	for (int i = 0; i < size; i++)
	{
		cout << " " << testArray[i];
	}
	delete[] testArray;
}
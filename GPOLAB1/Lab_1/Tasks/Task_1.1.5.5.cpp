#include <iostream>
#include <ctime>
#include "FirstLabTasks.h"

using namespace std;

int Search_1_1_5_5(int* userArray, int size, int searchingValue)
{
	int count = 0;
	for (int i = 0; i < size; i++)
	{
		if (userArray[i] >= searchingValue)
		{
			count += 1;
		}
	}
	return count;
}

void Task_1_1_5_5()
{
	int size = 10;
	int* userArray = new int[size];
	for (int i = 0; i < size; i++)
	{
		userArray[i] = 100 - rand() % 200;
	}

	cout << "UserArray is: " << endl;
	for (int i = 0; i < size; i++)
	{
		cout << " " << userArray[i];
	}

	cout << "\nEnter searching value:";
	int searchingValue;
	cin >> searchingValue;
	cout << "\nElements of Array more than " << searchingValue <<
		" is: " << Search_1_1_5_5(userArray, size, searchingValue);
	delete[] userArray;
}

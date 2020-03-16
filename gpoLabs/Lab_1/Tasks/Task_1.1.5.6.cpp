#include <iostream>
#include "FirstLabTasks.h"

using namespace std;

void PrintLetters_1_1_5_6(char* userArray, int size)
{
	for (int i = 0; i < size; i++)
	{
		if (userArray[i] >= 'a' && userArray[i] <= 'z')
		{
			cout << ' ' << userArray[i];
		}
	}
}

void Task_1_1_5_6()
{
	int size = 15;
	char* userArray = new char[size];
	cout << "Enter array of " << size << " chars:" << endl;
	for (int i = 0; i < size; i++)
	{
		cout << "Array[" << i << "] = ";
		cin >> userArray[i];
		cout << '\n';
	}

	cout << "Your array is:" << endl;
	for (int i = 0; i < size; i++)
	{
		cout << ' ' << userArray[i];
	}

	cout << endl << "All letters from your array:\n";
	PrintLetters_1_1_5_6(userArray, size);
	delete[] userArray;
}

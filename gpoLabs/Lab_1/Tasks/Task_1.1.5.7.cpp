#include <iostream>
#include <ctime>
#include "FirstLabTasks.h"

using namespace std;

int* MakeRandomArray_1_1_5_7(int arraySize)
{
	int* newArray = new int[arraySize];
	for (int i = 0; i < arraySize; i++)
	{
		newArray[i] = rand() % 101;
	}
	return newArray;
}

void PrintArray_1_1_5_7(int* userArray, int size)
{
	cout << "Array of " << size << endl;
	for (int i = 0; i < size; i++)
	{
		cout << " " << userArray[i];
	}
	cout << endl;
}

void Task_1_1_5_7()
{
	srand(time(nullptr));
	int size = 4;
	int* userArray = MakeRandomArray_1_1_5_7(size);
	PrintArray_1_1_5_7(userArray, size);
	delete[] userArray;
	size = 10;
	userArray = MakeRandomArray_1_1_5_7(size);
	PrintArray_1_1_5_7(userArray, size);
	delete[] userArray;
	size = 7;
	userArray = MakeRandomArray_1_1_5_7(size);
	PrintArray_1_1_5_7(userArray, size);
	delete[] userArray;
}

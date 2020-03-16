#include <iostream>
#include "FirstLabTasks.h"

using namespace std;

void Task_1_1_5_1()
{
	int size = 8;
	double* testArray = new double[size];
	for (int i = 0; i < size; i++)
	{
		testArray[i] = static_cast <double> (rand()) / (static_cast <double> (RAND_MAX / 100));
	}
	cout << "Array of double: " << endl;
	for (int i = 0; i < size; i++)
	{
		cout << testArray[i] << " ";
	}
	delete[] testArray;
}
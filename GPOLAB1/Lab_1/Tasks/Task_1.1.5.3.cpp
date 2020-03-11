#include <iostream>
#include "FirstLabTasks.h"

using namespace std;

void Task_1_1_5_3()
{
	int size;
	cout << "Enter char array size: ";
	cin >> size;
	char* charArray = new char[size];
	for (int i = 0; i < size; i++)
	{
		cout << "\nEnter array[" << i << "]: ";
		cin >> charArray[i];
	}
	cout << "Your array is: " << endl;
	for (int i = 0; i < size; i++)
	{
		cout << charArray[i] << " ";
	}
	delete[] charArray;
}
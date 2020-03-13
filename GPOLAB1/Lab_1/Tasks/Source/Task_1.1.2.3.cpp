#include <iostream>
#include "../Header/FirstLabTasks.h"

using namespace std;

void Task_1_1_2_3()
{
	/*Array input*/
	char userArray[8];
	cout << "Enter array of 8 chars:" << endl;
	for (int i = 0; i < 8; i++)
	{
		cout << "Array[i] = ";
		cin >> userArray[i];
		cout << '\n';
	}

	/*Array print*/
	cout << "Your array is:" << endl;
	for (int i = 0; i < 8; i++)
	{
		cout << ' ' << userArray[i];
	}

	/*Print letters in array*/
	cout << endl << "All letters from your array:\n";
	for (int i = 0; i < 8; i++)
	{
		if (userArray[i] >= 'a' && userArray[i] <= 'z')
		{
			cout << ' ' << userArray[i];
		}
	}
}

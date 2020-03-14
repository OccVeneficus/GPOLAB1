#include <iostream>
#include <ctime>
#include "FirstLabTasks.h"

using namespace std;

void Task_1_1_2_2()
{
	int userArray[12];
	srand(time(nullptr));
	for (int i = 0; i < 12; i++)
	{
		userArray[i] = 100 - rand() % 200;
	}

	/*Print array*/
	cout << "Array:" << endl;
	for (int i = 0; i < 12; i++)
	{
		cout << ' ' << userArray[i];
	}

	cout << "\nEnter searching value:";
	int searchingValue;
	cin >> searchingValue;


	int sum = 0;
	for (int i = 0; i < 12; i++)
	{
		if (userArray[i] >= searchingValue)
		{
			sum += 1;
		}
	}
	cout << "\nElements of Array more than " << searchingValue << " is: " << sum;
}

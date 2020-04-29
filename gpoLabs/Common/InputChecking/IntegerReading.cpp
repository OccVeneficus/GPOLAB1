#include "IntegerReading.h"

using namespace std;

bool CheckForNumber(string value)
{
	int size = value.length();
	if (isdigit((unsigned char)value[0]) || (unsigned char)value[0] == '-')
	{
		for (int i = 1; i < size; i++)
		{
			if (!isdigit((unsigned char)value[i]))
			{
				return false;
			}
		}
	}
	else
	{
		return false;
	}
}



void GetMenuItem(int& menuItem, int bottomIndex, int topIndex)
{
	if (bottomIndex >= topIndex)
	{
		throw exception("Error. topindex is less/equal than/to bottomIndex in GetMenuItem function.");
	}
	do
	{
		cout << "Enter value:";
		menuItem = ReadValue<int>();
		cout << endl;
	} 
	while (!CheckRange(menuItem, bottomIndex, topIndex));
}

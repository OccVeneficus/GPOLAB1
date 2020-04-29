#pragma once
#include <sstream>
#include <string>
#include <iostream>

using namespace std;

bool CheckForNumber(string value);

template <typename T>
T ReadValue()
{
	string inputValue;
	while (true)
	{
		getline(cin, inputValue);
		bool intCheckFlag = CheckForNumber(inputValue);
		istringstream inputStringStream(inputValue);
		T number;
		inputStringStream >> number;
		if (intCheckFlag == false || inputStringStream.fail())
		{
			cout << endl << "Wrong input, try again:";
			inputValue.clear();
		}
		else
		{
			return number;
		}
	}
}
/*bottomIndex must to be less than topIndex*/
void GetMenuItem(int& menuItem, int bottomIndex, int topIndex);

template <typename T>
bool CheckRange(T value, T bottomValue, T topValue);

template<typename T>
inline bool CheckRange(T value, T bottomValue, T topValue)
{
	if (bottomValue >= topValue)
	{
		throw exception("Error. Top value less/equal to bottom value.");
	}
	if (value <= topValue && value >= bottomValue)
	{
		return true;
	}
	else
	{
		return false;
	}
}

template<typename T>
inline T ReadValueInRange(T bottomValue, T topValue)
{
	T value; 
	do
	{
		cout << " Enter value in range from " << bottomValue <<
			" to " << topValue << ":";
		value = ReadValue<T>();
	} 
	while (!CheckRange<T>(value, bottomValue, topValue));
	return value;
}

template<typename T>
T ReadValueInRange(T bottomValue, T topValue);
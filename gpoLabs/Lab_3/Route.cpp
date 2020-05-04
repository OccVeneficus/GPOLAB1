#include "Route.h"

Route::Route()
{
	this->_stops = nullptr;
	this->_stopsCount = 0;
}

Route::Route(int number, int timeAvgMin, int frequencyMinutes,
	int stopsCount, string* stops)
{
	this->SetNumber(number);
	this->SetFrequencyMinutes(frequencyMinutes);
	this->SetTimeAvgMin(timeAvgMin);
	this->SetStops(stopsCount, stops);
}

Route::~Route()
{
	delete[] this->_stops;
}

Route& Route::operator=(const Route& other)
{
	if (this->_stops != nullptr)
	{
		delete[] this->_stops;
	}
	this->_stopsCount = other._stopsCount;
	this->_frequencyMinutes = other._frequencyMinutes;
	this->_timeAvgMinutes = other._timeAvgMinutes;
	this->_number = other._number;
	this->_stops = new string[other._stopsCount];
	for (int i = 0; i < other._stopsCount; i++)
	{
		this->_stops[i] = other._stops[i];
	}
	return *this;
}

void Route::SetNumber(int number)
{
	this->_number = number;
}

void Route::SetTimeAvgMin(int timeAvgMinutes)
{
	this->_timeAvgMinutes = timeAvgMinutes;
}

void Route::SetFrequencyMinutes(int frequencyMinutes)
{
	this->_frequencyMinutes = frequencyMinutes;
}

void Route::SetStops(int stopsCount, string* stops)
{
	if (this->_stops != nullptr)
	{
		delete[] this->_stops;
	}
	this->_stopsCount = stopsCount;
	this->_stops = new string[stopsCount];
	for (int i = 0; i < stopsCount; i++)
	{
		this->_stops[i] = stops[i];
	}
}

int Route::GetNumber()
{
	return this->_number;
}

int Route::GetTimeAvgMinutes()
{
	return this->_timeAvgMinutes;
}

int Route::GetFrequencyMinutes()
{
	return this->_frequencyMinutes;
}

int Route::GetStopsCount()
{
	return this->_stopsCount;
}

string* Route::GetStops()
{
	return this->_stops;
}

Route* Route::FindStop(string name)
{
	for (int i = 0; i < this->_stopsCount; i++)
	{
		if (this->_stops[i] == name)
		{
			return this;
		}
	}
	return nullptr;
}

#pragma once
#include <string>
#include <iostream>

using std::string;

class Route
{
private:
	int _number;
	int _timeAvgMinutes;
	int _frequencyMinutes;
	int _stopsCount;
	string* _stops;

public:
	Route();
	Route(int number, int timeAvgMinutes, int frequencyMinutes,
		int stopsCount, string* stops);
	~Route();

	Route& operator = (const Route& other);

	void SetNumber(int number);
	void SetTimeAvgMin(int timeAvgMinutes);
	void SetFrequencyMinutes(int frequencyMinutes);
	void SetStops(int stopsCount, string* stops);

	int GetNumber();
	int GetTimeAvgMinutes();
	int GetFrequencyMinutes();
	int GetStopsCount();
	string* GetStops();

	Route* FindStop(string name);
};


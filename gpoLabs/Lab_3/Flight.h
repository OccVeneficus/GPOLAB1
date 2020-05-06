#pragma once
#include <string>
#include "Time.h"

using std::string;
using std::exception;
// TODO: именование
class Flight
{
private:
	int _number;
	string _pointOfDeparture;
	string _pointOfArrival;
	Time* _timeOfDeparture;
	Time* _timeOfArrival;

public:
	Flight(int number, string pointOfDeparture, string pointOfArrival,
		Time* timeOfDeparture, Time* timeOfArrival);
	Flight();

	void SetNumber(int number);
	void SetPointDeparture(string pointOfDeparture);
	void SetPointOfArrival(string pointOfArrival);
	void SetTimesDepartureArrival(Time* timeOfDeparture, Time* timeOfArrival);

	int GetNumber();
	string GetPointOfDeparture();
	string GetPointOfArrival();
	Time* GetTimeOfDeparture();
	Time* GetTimeOFArrival();
};


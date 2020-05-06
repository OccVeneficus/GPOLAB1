#pragma once
#include <string>
#include "cTime.h"

using std::string;
using std::exception;
// TODO: именование
class cFlight
{
private:
	int _number;
	string _pointOfDeparture;
	string _pointOfArrival;
	cTime* _timeOfDeparture;
	cTime* _timeOfArrival;

public:
	cFlight(int number, string pointOfDeparture, string pointOfArrival,
		cTime* timeOfDeparture, cTime* timeOfArrival);
	cFlight();

	void SetNumber(int number);
	void SetPointDeparture(string pointOfDeparture);
	void SetPointOfArrival(string pointOfArrival);
	void SetTimesDepartureArrival(cTime* timeOfDeparture, cTime* timeOfArrival);

	int GetNumber();
	string GetPointOfDeparture();
	string GetPointOfArrival();
	cTime* GetTimeOfDeparture();
	cTime* GetTimeOFArrival();
};


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
	string _pointDeparture;
	string _pointArrival;
	Time* _timeDeparture;
	Time* _timeArrival;

public:
	Flight(int number, string pointDeparture, string pointArrival,
		Time* timeDeparture, Time* timeArrival);
	Flight();

	void SetNumber(int number);
	void SetPointDeparture(string pointDeparture);
	void SetPointArrival(string pointArrival);
	void SetTimesDepartureArrival(Time* timeDeparture, Time* timeArrival);

	int GetNumber();
	string GetPointDeparture();
	string GetPointArrival();
	Time* GetTimeDeparture();
	Time* GetTimeArrival();
};


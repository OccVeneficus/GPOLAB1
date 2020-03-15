#pragma once
#include <string>

using namespace std;

struct Flight
{
	string Departure;
	string Arrival;
	int MinutesTimeOfFlight;
};

Flight* MakeFlight(string departure, string arrival, int minutesTimeOfFlight);
Flight* CopyFlight(Flight* flight);
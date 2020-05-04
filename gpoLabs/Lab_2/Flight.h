#pragma once
#include <string>

using namespace std;

struct Flight
{
	string Departure;
	string Arrival;
	int MinutesFlightTime;
};

Flight* MakeFlight(string departure, string arrival, int MinutesFlightTime);
Flight* CopyFlight(Flight* flight);
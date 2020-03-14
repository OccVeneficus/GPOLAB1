#include "../Common/ConsoleOutput/ConsoleOutput.h"
#include <string>

using namespace std;

struct Rectangle
{
	double Length;
	double Width;
	string Color;
};

struct Flight
{
	string Departure;
	string Arrival;
	int MinutesTimeOfFlight;
};

struct Movie
{
	string Name;
	int MinutesDuration;
	int Year;
	string Genre;
	double Rating;

};

struct Time
{
	int Hours;
	int Minutes;
	int Seconds;
};
#include "Flight.h"

Flight* MakeFlight(string departure, string arrival, int minutesTimeOfFlight)
{
	Flight* flight = new Flight;
	flight->Departure = departure;
	flight->Arrival = arrival;
	flight->MinutesTimeOfFlight = minutesTimeOfFlight;
	return flight;
}

Flight* CopyFlight(Flight* flight)
{
	Flight* copiedFlight = new Flight;
	copiedFlight->Departure = flight->Departure;
	copiedFlight->Arrival = flight->Arrival;
	copiedFlight->MinutesTimeOfFlight = flight->MinutesTimeOfFlight;
	return copiedFlight;
}
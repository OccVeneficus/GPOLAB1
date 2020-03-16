#include "Flight.h"

Flight* MakeFlight(string departure, string arrival, int MinutesFlightTime)
{
	Flight* flight = new Flight;
	flight->Departure = departure;
	flight->Arrival = arrival;
	flight->MinutesFlightTime = MinutesFlightTime;
	return flight;
}

Flight* CopyFlight(Flight* flight)
{
	//TODO: заменить на вызов функции-конструктора
	Flight* copiedFlight = new Flight;
	return copiedFlight = MakeFlight(flight->Departure, flight->Arrival, flight->MinutesFlightTime);
}
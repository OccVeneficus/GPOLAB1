#include "cFlight.h"
// TODO: именование без Of - по правилам образования родительного падежа в англ.
cFlight::cFlight(int number, string pointOfDeparture, string pointOfArrival,
    cTime* timeOfDeparture, cTime* timeOfArrival)
{
    SetNumber(number);
    SetPointDeparture(pointOfDeparture);
    SetPointOfArrival(pointOfArrival);
    SetTimesDepartureArrival(timeOfDeparture, timeOfArrival);
}

cFlight::cFlight()
{
    this->_timeOfArrival = nullptr;
    this->_timeOfDeparture = nullptr;
}

void cFlight::SetNumber(int number)
{
    this->_number = number;
}

void cFlight::SetPointDeparture(string pointOfDeparture)
{
    this->_pointOfDeparture = pointOfDeparture;
}

void cFlight::SetPointOfArrival(string pointOfArrival)
{
    this->_pointOfArrival = pointOfArrival;
}

void cFlight::SetTimesDepartureArrival(cTime* timeOfDeparture,
    cTime* timeOfArrival)
{
    if (*timeOfArrival <= *timeOfDeparture)
    {
        throw exception("Time of departure cant be bigger than time of arrival.");
    }
    this->_timeOfArrival = timeOfArrival;
    this->_timeOfDeparture = timeOfDeparture;
}

int cFlight::GetNumber()
{
    return this->_number;
}

string cFlight::GetPointOfDeparture()
{
    return this->_pointOfDeparture;
}

string cFlight::GetPointOfArrival()
{
    return this->_pointOfArrival;
}

cTime* cFlight::GetTimeOfDeparture()
{
    return this->_timeOfDeparture;
}

cTime* cFlight::GetTimeOFArrival()
{
    return this->_timeOfArrival;
}


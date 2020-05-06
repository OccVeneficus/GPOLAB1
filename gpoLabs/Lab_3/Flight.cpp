#include "Flight.h"
// TODO: именование без Of - по правилам образования родительного падежа в англ.
Flight::Flight(int number, string pointOfDeparture, string pointOfArrival,
    Time* timeOfDeparture, Time* timeOfArrival)
{
    SetNumber(number);
    SetPointDeparture(pointOfDeparture);
    SetPointOfArrival(pointOfArrival);
    SetTimesDepartureArrival(timeOfDeparture, timeOfArrival);
}

Flight::Flight()
{
    this->_timeOfArrival = nullptr;
    this->_timeOfDeparture = nullptr;
}

void Flight::SetNumber(int number)
{
    this->_number = number;
}

void Flight::SetPointDeparture(string pointOfDeparture)
{
    this->_pointOfDeparture = pointOfDeparture;
}

void Flight::SetPointOfArrival(string pointOfArrival)
{
    this->_pointOfArrival = pointOfArrival;
}

void Flight::SetTimesDepartureArrival(Time* timeOfDeparture,
    Time* timeOfArrival)
{
    if (*timeOfArrival <= *timeOfDeparture)
    {
        throw exception("Time of departure cant be bigger than time of arrival.");
    }
    this->_timeOfArrival = timeOfArrival;
    this->_timeOfDeparture = timeOfDeparture;
}

int Flight::GetNumber()
{
    return this->_number;
}

string Flight::GetPointOfDeparture()
{
    return this->_pointOfDeparture;
}

string Flight::GetPointOfArrival()
{
    return this->_pointOfArrival;
}

Time* Flight::GetTimeOfDeparture()
{
    return this->_timeOfDeparture;
}

Time* Flight::GetTimeOFArrival()
{
    return this->_timeOfArrival;
}


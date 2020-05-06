#include "Flight.h"

Flight::Flight(int number, string pointDeparture, string pointArrival,
    Time* timeDeparture, Time* timeArrival)
{
    SetNumber(number);
    SetPointDeparture(pointDeparture);
    SetPointArrival(pointArrival);
    SetTimesDepartureArrival(timeDeparture, timeArrival);
}

Flight::Flight()
{
    this->_timeArrival = nullptr;
    this->_timeDeparture = nullptr;
}

void Flight::SetNumber(int number)
{
    this->_number = number;
}

void Flight::SetPointDeparture(string pointDeparture)
{
    this->_pointDeparture = pointDeparture;
}

void Flight::SetPointArrival(string pointArrival)
{
    this->_pointArrival = pointArrival;
}

void Flight::SetTimesDepartureArrival(Time* timeDeparture,
    Time* timeArrival)
{
    if (*timeArrival <= *timeDeparture)
    {
        throw exception("Time of departure cant be bigger than time of arrival.");
    }
    this->_timeArrival = timeArrival;
    this->_timeDeparture = timeDeparture;
}

int Flight::GetNumber()
{
    return this->_number;
}

string Flight::GetPointDeparture()
{
    return this->_pointDeparture;
}

string Flight::GetPointArrival()
{
    return this->_pointArrival;
}

Time* Flight::GetTimeDeparture()
{
    return this->_timeDeparture;
}

Time* Flight::GetTimeArrival()
{
    return this->_timeArrival;
}


#include "cTime.h"
#include <exception>

using namespace std;

cTime::cTime(int year, int month, int day, int hour, int minute)
{
	SetYear(year);
	SetMonth(month);
	SetDay(day);
	SetHour(hour);
	SetMinute(minute);
}

void cTime::SetYear(int year)
{
	if (year < 1 || year > 2020)
	{
		throw exception("Year must be in range from 1 to 2020");
	}
	this->_year = year;
}

void cTime::SetMonth(int month)
{
	if (month < 1 || month > 12)
	{
		throw exception("Month must be in range from 1 to 12");
	}
	this->_month = month;
}

void cTime::SetDay(int day)
{
	if (day < 1 || day > 30)
	{
		throw exception("Day must be in range from 1 to 30");
	}
	this->_day = day;
}

void cTime::SetHour(int hour)
{
	if (hour < 0 || hour > 23)
	{
		throw exception("Hour must be in range from 0 to 23");
	}
	this->_hour = hour;
}

void cTime::SetMinute(int minute)
{
	if (minute < 0 || minute > 60)
	{
		throw exception("Minutes must be in range from 0 to 60");
	}
	this->_minute = minute;
}

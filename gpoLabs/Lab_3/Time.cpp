#include "Time.h"
#include <exception>
#include "../Common/Consts/Consts.h"

using std::exception;

Time::Time(int year, int month, int day, int hour, int minute)
{
	SetYear(year);
	SetMonth(month);
	SetDay(day);
	SetHour(hour);
	SetMinute(minute);
}

Time::Time()
{
}

void Time::SetYear(int year)
{
	if (year < 0 || year > 2020)
	{
		throw exception("Year must be in range from 0 to 2020");
	}
	this->_year = year;
}

void Time::SetMonth(int month)
{
	if (month < 0 || month > 12)
	{
		throw exception("Month must be in range from 0 to 12");
	}
	this->_month = month;
}

void Time::SetDay(int day)
{
	if (day < 0 || day > 30)
	{
		throw exception("Day must be in range from 0 to 30");
	}
	this->_day = day;
}

void Time::SetHour(int hour)
{
	if (hour < 0 || hour > 23)
	{
		throw exception("Hour must be in range from 0 to 23");
	}
	this->_hour = hour;
}

void Time::SetMinute(int minute)
{
	if (minute < 0 || minute > 60)
	{
		throw exception("Minutes must be in range from 0 to 60");
	}
	this->_minute = minute;
}

int Time::GetYear()
{
	return this->_year;
}

int Time::GetMonth()
{
	return this->_month;
}

int Time::GetDay()
{
	return this->_day;
}

int Time::GetHour()
{
	return this->_hour;
}

int Time::GetMinute()
{
	return this->_minute;
}
// TODO: обычно реализуют сразу все операторы сравнения, потому что под условием if может использоваться любой
// TODO: реализуй операторы == и <, а на основе этих двух сделай > <= >= !=
bool Time::operator<=(const Time& other)
{
	// TODO: можно сделать проще, без if и ветвления
	if (this->_day <= other._day && this->_hour <= other._hour &&
		this->_minute <= other._minute && this->_month <= other._month &&
		this->_year <= other._year)
	{
		return true;
	}
	else
	{
		return false;
	}
}


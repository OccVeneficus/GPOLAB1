#pragma once

class Time
{
private:
	int _year;
	int _month;
	int _day;
	int _hour;
	int _minute;

public:
	Time(int year,int month, int day,int hour, int minute);
	Time();

	void SetYear(int year);
	void SetMonth(int month);
	void SetDay(int day);
	void SetHour(int hour);
	void SetMinute(int minute);

	int GetYear();
	int GetMonth();
	int GetDay();
	int GetHour();
	int GetMinute();

	bool operator <= (const Time& other);
};


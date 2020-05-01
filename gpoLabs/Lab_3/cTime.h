#pragma once
class cTime
{
private:
	int _year;
	int _month;
	int _day;
	int _hour;
	int _minute;
public:
	cTime(int year,int month, int day,int hour, int minute);

	void SetYear(int year);
	void SetMonth(int month);
	void SetDay(int day);
	void SetHour(int hour);
	void SetMinute(int minute);
};


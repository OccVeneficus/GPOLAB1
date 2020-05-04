#include "Time.h"

Time* MakeTime(int hours, int minutes, int seconds)
{
	Time* time = new Time;
	time->Hours = hours;
	time->Minutes = minutes;
	time->Seconds = seconds;
	return time;
}

Time* CopyTime(Time* time)
{
	Time* copiedTime = new Time;
	return copiedTime = MakeTime(time->Hours, time->Minutes, time->Seconds);
}

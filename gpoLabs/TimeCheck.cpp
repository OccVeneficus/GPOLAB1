#include "TimeCheck.h"

// TODO: Ура! Ты первый, кто сделал функцию определения текущего года, а не вбил литерал "2020". С начала семестра ждал...
int GetCurrentYear()
{
	{
		struct tm newTime;
		time_t now = time(nullptr);
		localtime_s(&newTime, &now);
		return newTime.tm_year + 1900;
	}
}

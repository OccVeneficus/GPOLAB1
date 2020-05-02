#include "cSong.h"
#include <exception>

using std::exception;

cSong::cSong(int durationSeconds, string name, sGenre genre)
{
}

cSong::cSong()
{
}

int cSong::GetDurationSeconds()
{
	return this->_durationSeconds;
}

string cSong::GetName()
{
	return this->_name;
}

sGenre cSong::GetGenre()
{
	return this->_genre;
}

void cSong::SetDurationSeconds(int durationSeconds)
{
	if (durationSeconds <= 0)
	{
		throw exception("Duration must be more than 0.");
	}
	this->_durationSeconds = durationSeconds;
}

void cSong::SetName(string name)
{
	this->_name = name;
}

void cSong::SetGenre(sGenre genre)
{
	this->_genre = genre;
}

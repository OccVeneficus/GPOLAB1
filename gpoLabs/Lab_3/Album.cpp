#include "Album.h"
#include <exception>
#include "../Common/Consts/Consts.h"
#include "../TimeCheck.h"

using std::exception;

Album::Album(string name, int year, Song* songs, int songsCount)
{
	this->SetName(name);
	this->SetYear(year);
	this->SetSongs(songs, songsCount);
}

Album::Album()
{
	this->SetSongs(nullptr,0);
}

Album::~Album()
{
	delete[] this->_songs;
}

void Album::SetName(string name)
{
	this->_name = name;
}

void Album::SetYear(int year)
{
	if (year < 1 || year > GetCurrentYear())
	{
		throw exception("Year must be in range from 1 to currentYear");
	}
	this->_year = year;
}

void Album::SetSongs(Song* songs, int songsCounter)
{
	this->_songs = songs;
	this->_songCount = songsCounter;
}

string Album::GetName()
{
	return this->_name;
}

int Album::GetYear()
{
	return this->_year;
}

Song* Album::GetSongs()
{
	return this->_songs;
}

int Album::GetSongCounter()
{
	return this->_songCount;
}

Song* Album::FindSong(string songName)
{
	for (int i = 0; i < this->_songCount; i++)
	{
		if (this->GetSongs()[i].GetName() == songName)
		{
			return &this->GetSongs()[i];
		}
	}
	return nullptr;
}

#include "cAlbum.h"
#include <exception>

using std::exception;

cAlbum::cAlbum(string name, int year, cSong* song, int songCount)
{
	this->SetName(name);
	this->SetYear(year);
	this->SetSong(song, songCount);
}

cAlbum::cAlbum()
{
	this->SetSong(nullptr,0);
}

cAlbum::~cAlbum()
{
	delete[] this->_song;
}

void cAlbum::SetName(string name)
{
	this->_name = name;
}

void cAlbum::SetYear(int year)
{
	if (year < 1 || year > 2020)
	{
		throw exception("Year must be in range from 0 to 2020.");
	}
	this->_year = year;
}

void cAlbum::SetSong(cSong* song, int songCounter)
{
	this->_song = new cSong[songCounter];
	this->_songCount = songCounter;
	for (int i = 0; i < songCounter; i++)
	{
		this->_song[i] = song[i];
	}
}

string cAlbum::GetName()
{
	return this->_name;
}

int cAlbum::GetYeat()
{
	return this->_year;
}

cSong* cAlbum::GetSong()
{
	return this->_song;
}

int cAlbum::GetSongCounter()
{
	return this->_songCount;
}

cSong* cAlbum::FindSong(string songName)
{
	for (int i = 0; i < this->_songCount; i++)
	{
		if (this->GetSong()[i].GetName() == songName)
		{
			return &this->GetSong()[i];
		}
	}
	return nullptr;
}

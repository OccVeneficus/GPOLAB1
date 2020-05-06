#include "Album.h"
#include <exception>
#include "../Common/Consts/Consts.h"

using std::exception;

// TODO: песни в множественном числе. Это массив, поэтому это важно!
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
	// TODO:можешь системными функциями узнать текущий год?
	if (year < 1 || year > timePtr->tm_year + 1900)
	{
		throw exception("Year must be in range from 1 to currentYear");
	}
	this->_year = year;
}
// TODO:множественное число!
void Album::SetSongs(Song* songs, int songsCounter)
{	// TODO: обычно делают просто сохранение переданного указателя, без поэлементного копирования,
	// иначе поведение с выделением и освобождением памяти становится неочевидным
	this->_songs = new Song[songsCounter];
	this->_songCount = songsCounter;
	for (int i = 0; i < songsCounter; i++)
	{
		this->_songs[i] = songs[i];
	}
}

string Album::GetName()
{
	return this->_name;
}

int Album::GetYear()
{
	return this->_year;
}
// TODO: множественное число!
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

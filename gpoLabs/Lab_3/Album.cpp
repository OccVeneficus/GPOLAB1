#include "Album.h"
#include <exception>

using std::exception;

// TODO: песни в множественном числе. Это массив, поэтому это важно!
Album::Album(string name, int year, Song* song, int songCount)
{
	this->SetName(name);
	this->SetYear(year);
	this->SetSong(song, songCount);
}

Album::Album()
{
	this->SetSong(nullptr,0);
}

Album::~Album()
{
	delete[] this->_song;
}

void Album::SetName(string name)
{
	this->_name = name;
}

void Album::SetYear(int year)
{
	// TODO:можешь системными функциями узнать текущий год?
	if (year < 1 || year > 2020)
	{
		throw exception("Year must be in range from 0 to 2020.");
	}
	this->_year = year;
}
// TODO:множественное число!
void Album::SetSong(Song* song, int songCounter)
{	// TODO: обычно делают просто сохранение переданного указателя, без поэлементного копирования,
	// иначе поведение с выделением и освобождением памяти становится неочевидным
	this->_song = new Song[songCounter];
	this->_songCount = songCounter;
	for (int i = 0; i < songCounter; i++)
	{
		this->_song[i] = song[i];
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
Song* Album::GetSong()
{
	return this->_song;
}

int Album::GetSongCounter()
{
	return this->_songCount;
}

Song* Album::FindSong(string songName)
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

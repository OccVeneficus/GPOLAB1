#include "cBand.h"

cBand::cBand(string name, string description, cAlbum* album, int albumCount)
{
	this->SetName(name);
	this->SetDescription(description);
	this->SetAlbum(album, albumCount);
}

cBand::~cBand()
{
	delete[] this->_album;
}

void cBand::SetName(string name)
{
	this->_name = name;
}

void cBand::SetDescription(string description)
{
	this->_description = description;
}

void cBand::SetAlbum(cAlbum* album, int albumCount)
{
	if (this->_album != nullptr)
	{
		delete[] this->_album;
	}
	this->_album = new cAlbum[albumCount];
	for (int i = 0; i < albumCount; i++)
	{
		this->_album[i] = album[i];
	}
	this->_albumCount = albumCount;
}

string cBand::GetName()
{
	return this->_name;
}

string cBand::GetDescription()
{
	return this->_description;
}

cAlbum* cBand::GetAlbum()
{
	return this->_album;
}

int cBand::GetAlbumCount()
{
	return this->_albumCount;
}

cSong* cBand::FindSong(string name)
{
	cSong* song = nullptr;
	for (int i = 0; i < this->_albumCount; i++)
	{
		song = this->_album[i].FindSong(name);
		if (song != nullptr)
		{
			return song;
		}
	}
	return song;
}

cAlbum* cBand::FindAlbum(string name)
{
	for (int i = 0; i < this->_albumCount; i++)
	{
		if (this->_album[i].FindSong(name) != nullptr)
		{
			return &this->_album[i];
		}
	}
	return nullptr;
}

cSong** cBand::GetAllSongs(int& songCount)
{
	songCount = 0;
	for (int i = 0; i < this->_albumCount; i++)
	{
		songCount = songCount + this->_album[i].GetSongCounter();
	}
	cSong** allSongs = new cSong*[songCount];
	int j = 0;
	for (int i = 0; i < this->_albumCount; i++)
	{
		int k = 0;
		while (k != this->_album[i].GetSongCounter())
		{
			allSongs[j] = &this->_album[i].GetSong()[k];
			k++;
			j++;
		}
	}
	return allSongs;
}

cSong** cBand::GetAllGenreSongs(int& songCount, sGenre genre)
{
	songCount = 0;
	for (int i = 0; i < this->_albumCount; i++)
	{
		for (int j = 0; j < this->_album[i].GetSongCounter(); j++)
		{
			if (this->_album[i].GetSong()[j].GetGenre() == genre)
			{
				songCount++;
			}
		}
	}
	cSong** allGenreSongs = new cSong * [songCount];
	int j = 0;
	for (int i = 0; i < this->_albumCount; i++)
	{
		int k = 0;
		while (k != this->_album[i].GetSongCounter())
		{
			if (this->_album[i].GetSong()[k].GetGenre() == genre)
			{
				allGenreSongs[j] = &this->_album[i].GetSong()[k];
				j++;
			}
			k++;
		}
	}
	return allGenreSongs;
}


#include "Band.h"

Band::Band(string name, string description, Album* albums, int albumsCount)
{
	this->SetName(name);
	this->SetDescription(description);
	this->SetAlbums(albums, albumsCount);
}

Band::~Band()
{
	delete[] this->_albums;
}

void Band::SetName(string name)
{
	this->_name = name;
}

void Band::SetDescription(string description)
{
	this->_description = description;
}

void Band::SetAlbums(Album* albums, int albumsCount)
{
	this->_albums = new Album[albumsCount];
	for (int i = 0; i < albumsCount; i++)
	{
		this->_albums[i] = albums[i];
	}
	this->_albumsCount = albumsCount;
}

string Band::GetName()
{
	return this->_name;
}

string Band::GetDescription()
{
	return this->_description;
}

Album* Band::GetAlbums()
{
	return this->_albums;
}

int Band::GetAlbumsCount()
{
	return this->_albumsCount;
}

Song* Band::FindSong(string name)
{
	Song* song = nullptr;
	for (int i = 0; i < this->_albumsCount; i++)
	{
		song = this->_albums[i].FindSong(name);
		if (song != nullptr)
		{
			return song;
		}
	}
	return song;
}

Album* Band::FindAlbum(string name)
{
	for (int i = 0; i < this->_albumsCount; i++)
	{
		if (this->_albums[i].FindSong(name) != nullptr)
		{
			return &this->_albums[i];
		}
	}
	return nullptr;
}

Song** Band::GetAllSongs(int& songCount)
{
	songCount = 0;
	for (int i = 0; i < this->_albumsCount; i++)
	{
		songCount = songCount + this->_albums[i].GetSongCounter();
	}
	Song** allSongs = new Song*[songCount];
	int j = 0;
	for (int i = 0; i < this->_albumsCount; i++)
	{
		int k = 0;
		while (k != this->_albums[i].GetSongCounter())
		{
			allSongs[j] = &this->_albums[i].GetSongs()[k];
			k++;
			j++;
		}
	}
	return allSongs;
}

Song** Band::GetAllGenreSongs(int& songCount, Genre genre)
{
	songCount = 0;
	for (int i = 0; i < this->_albumsCount; i++)
	{
		for (int j = 0; j < this->_albums[i].GetSongCounter(); j++)
		{
			if (this->_albums[i].GetSongs()[j].GetGenre() == genre)
			{
				songCount++;
			}
		}
	}
	Song** allGenreSongs = new Song * [songCount];
	int j = 0;
	for (int i = 0; i < this->_albumsCount; i++)
	{
		int k = 0;
		while (k != this->_albums[i].GetSongCounter())
		{
			if (this->_albums[i].GetSongs()[k].GetGenre() == genre)
			{
				allGenreSongs[j] = &this->_albums[i].GetSongs()[k];
				j++;
			}
			k++;
		}
	}
	return allGenreSongs;
}


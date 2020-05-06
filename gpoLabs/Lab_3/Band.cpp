#include "Band.h"
// TODO: множественное число для альбомов
Band::Band(string name, string description, Album* album, int albumCount)
{
	this->SetName(name);
	this->SetDescription(description);
	this->SetAlbum(album, albumCount);
}

Band::~Band()
{
	delete[] this->_album;
}

void Band::SetName(string name)
{
	this->_name = name;
}

void Band::SetDescription(string description)
{
	this->_description = description;
}
// TODO: множ число
void Band::SetAlbum(Album* album, int albumCount)
{
	// TODO: ты не можешь быть уверенным, что массив динамический
	if (this->_album != nullptr)
	{
		delete[] this->_album;
	}
	this->_album = new Album[albumCount];
	for (int i = 0; i < albumCount; i++)
	{
		this->_album[i] = album[i];
	}
	this->_albumCount = albumCount;
}

string Band::GetName()
{
	return this->_name;
}

string Band::GetDescription()
{
	return this->_description;
}
// TODO:
Album* Band::GetAlbum()
{
	return this->_album;
}
// TODO:
int Band::GetAlbumCount()
{
	return this->_albumCount;
}

Song* Band::FindSong(string name)
{
	Song* song = nullptr;
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

Album* Band::FindAlbum(string name)
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

Song** Band::GetAllSongs(int& songCount)
{
	songCount = 0;
	for (int i = 0; i < this->_albumCount; i++)
	{
		songCount = songCount + this->_album[i].GetSongCounter();
	}
	Song** allSongs = new Song*[songCount];
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

Song** Band::GetAllGenreSongs(int& songCount, Genre genre)
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
	Song** allGenreSongs = new Song * [songCount];
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


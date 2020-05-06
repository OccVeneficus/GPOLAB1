#pragma once
#include "Album.h"
// TODO: именование
class Band
{
private:

	string _name;
	string _description;
	Album* _album;
	int _albumCount;

public:

	Band(string name, string description, Album* album, int albumCount);
	~Band();

	void SetName(string name);
	void SetDescription(string description);
	void SetAlbum(Album* Album, int albumCount);

	string GetName();
	string GetDescription();
	Album* GetAlbum();
	int GetAlbumCount();

	Song* FindSong(string name);
	Album* FindAlbum(string name);
	Song** GetAllSongs(int& songCount);
	Song** GetAllGenreSongs(int& songCount, Genre genre);
};


#pragma once
#include "Album.h"
// TODO: именование
class Band
{
private:

	string _name;
	string _description;
	Album* _albums;
	int _albumsCount;

public:

	Band(string name, string description, Album* albums, int albumsCount);
	~Band();

	void SetName(string name);
	void SetDescription(string description);
	void SetAlbums(Album* albums, int albumsCount);

	string GetName();
	string GetDescription();
	Album* GetAlbums();
	int GetAlbumsCount();

	Song* FindSong(string name);
	Album* FindAlbum(string name);
	Song** GetAllSongs(int& songCount);
	Song** GetAllGenreSongs(int& songCount, Genre genre);
};


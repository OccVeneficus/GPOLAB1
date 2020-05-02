#pragma once
#include "cAlbum.h"

class cBand
{
private:
	string _name;
	string _description;
	cAlbum* _album;
	int _albumCount;
public:
	cBand(string name, string description, cAlbum* album, int albumCount);

	void SetName(string name);
	void SetDescription(string description);
	void SetAlbum(cAlbum* Album, int albumCount);

	string GetName();
	string GetDescription();
	cAlbum* GetAlbum();

	cSong* FindSong(string songName);
};


#pragma once
#include "cSong.h"

class cAlbum
{
private:
	string _name;
	int _year;
	cSong* _song;
	int _songCount;
public:
	cAlbum(string name, int year, cSong* song, int songCount);
	cAlbum();

	void SetName(string name);
	void SetYear(int year);
	void SetSong(cSong* song, int songCounter);

	string GetName();
	int GetYeat();
	cSong* GetSong();
	int GetSongCounter();

	cSong* FindSong(string songName);

	~cAlbum();
};


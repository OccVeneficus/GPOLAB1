#pragma once
#include "Song.h"

class Album
{
private:
	string _name;
	int _year;
	Song* _songs;
	int _songCount;

public:
	Album(string name, int year, Song* songs, int songsCount);
	Album();

	void SetName(string name);
	void SetYear(int year);
	void SetSongs(Song* songs, int songsCounter);

	string GetName();
	int GetYear();
	Song* GetSongs();
	int GetSongCounter();

	Song* FindSong(string songName);

	~Album();
};


#pragma once
#include "sGenre.h"
#include <string>

using std::string;
class cSong
{
private:
	int _durationSeconds;
	string _name;
	sGenre _genre;

public:
	cSong(int durationSeconds, string name, sGenre genre);
	cSong();

	int GetDurationSeconds();
	string GetName();
	sGenre GetGenre();

	void SetDurationSeconds(int durationSeconds);
	void SetName(string name);
	void SetGenre(sGenre genre);
};


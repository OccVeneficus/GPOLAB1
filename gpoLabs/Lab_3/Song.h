﻿#pragma once
#include "Genre.h"
#include <string>

using std::string;

class Song
{
private:
	int _durationSeconds;
	string _name;
	Genre _genre;

public:
	Song(int durationSeconds, string name, Genre genre);
	Song();

	int GetDurationSeconds();
	string GetName();
	Genre GetGenre();

	void SetDurationSeconds(int durationSeconds);
	void SetName(string name);
	void SetGenre(Genre genre);
};


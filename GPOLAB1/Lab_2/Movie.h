#pragma once
#include <string>
#include "Enums.h"

using namespace std;

struct Movie
{
	string Name;
	int MinutesDuration; //TODO: единицы измерения лучше в конце - пользоваться автодополнением удобнее
	int Year;
	Genre Genre;
	double Rating;

};

Movie* MakeMovie(string name, int MinutesDuration, int year, //TODO: не забыть переименовать здесь
	Genre genre, double rating);
Movie* CopyMovie(Movie* movie);
#include "Movie.h"
#include "Enums.h"

Movie* MakeMovie(string name, int minutesDuration, int year,
	Genre genre, double rating)
{
	Movie* movie = new Movie;
	movie->Name = name;
	movie->Genre = genre;
	movie->MinutesDuration = minutesDuration;
	movie->Rating = rating;
	movie->Year = year;
	return movie;
}

Movie* CopyMovie(Movie* movie)
{
	//TODO: заменить на вызов функции-конструктора
	Movie* copiedMovie = new Movie;
	copiedMovie->Name = movie->Name;
	copiedMovie->Genre = movie->Genre;
	copiedMovie->Year = movie->Year;
	copiedMovie->Rating = movie->Rating;
	copiedMovie->MinutesDuration = movie->MinutesDuration;
	return copiedMovie;
}
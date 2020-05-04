#include "Movie.h"
#include "Enums.h"

Movie* MakeMovie(string name, int durationMinutes, int year,
	Genre genre, double rating)
{
	Movie* movie = new Movie;
	movie->Name = name;
	movie->Genre = genre;
	movie->DurationMinutes = durationMinutes;
	movie->Rating = rating;
	movie->Year = year;
	return movie;
}

Movie* CopyMovie(Movie* movie)
{
	Movie* copiedMovie = new Movie;
	return copiedMovie = MakeMovie(movie->Name, movie->DurationMinutes,
		movie->Year, movie->Genre, movie->Rating);
}
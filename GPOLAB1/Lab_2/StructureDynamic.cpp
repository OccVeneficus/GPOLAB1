#include "StructureDynamic.h"
#include <iostream>
#include "Movie.h"

using namespace std;

/*2.2.6.1*/
void DemoDynamicFlight()
{
	Flight* flight = new Flight;
	flight->Departure = "Moscow";
	flight->Arrival = "Vladivostok";
	flight->MinutesTimeOfFlight = 450;
	cout << "Flight " << flight->Departure << " - " << flight->Arrival <<
		", in flight time " << flight->MinutesTimeOfFlight << endl;
	delete flight;
}

/*2.2.6.2*/
void DemoDynamicFlights()
{
	Flight* flight = new Flight[4];
	flight[0].Departure = "London";
	flight[0].Arrival = "Paris";
	flight[0].MinutesTimeOfFlight = 80;

	flight[1].Departure = "Paris";
	flight[1].Arrival = "London";
	flight[1].MinutesTimeOfFlight = 80;

	flight[2].Departure = "Moscow";
	flight[2].Arrival = "Dubai";
	flight[2].MinutesTimeOfFlight = 130;

	flight[3].Departure = "Novgorod";
	flight[3].Arrival = "St. Petersburg";
	flight[3].MinutesTimeOfFlight = 90;

	for (int i = 0; i < 4; i++)
	{
		cout << "Flight " << i << ' ' << flight[i].Departure <<
			" - " << flight[i].Arrival << " in flight time " <<
			flight[i].MinutesTimeOfFlight << endl;
	}
	FindShortestFlight(flight, 4);
	delete[] flight;
}

/*2.2.6.3*/
void FindShortestFlight(Flight* flights, int count)
{
	Flight shortestFlight;
	shortestFlight.Departure = flights[0].Departure;
	shortestFlight.Arrival = flights[0].Arrival;
	shortestFlight.MinutesTimeOfFlight = flights[0].MinutesTimeOfFlight;
	for (int i = 0; i < count; i++)
	{
		if (flights[i].MinutesTimeOfFlight < shortestFlight.MinutesTimeOfFlight)
		{
			shortestFlight.Departure = flights[i].Departure;
			shortestFlight.Arrival = flights[i].Arrival;
			shortestFlight.MinutesTimeOfFlight = flights[i].MinutesTimeOfFlight;
		}
	}
	cout << "Shortest flight is " << shortestFlight.Departure << " - " <<
		shortestFlight.Arrival << ", in flight time " <<
		shortestFlight.MinutesTimeOfFlight << endl;
}

void DemoMovieWithGenre()
{
	Movie* movie1 = new Movie;
	movie1->Genre = BlockBuster;
	movie1->Rating = 2.3;
	movie1->Name = "Sign";
	movie1->Year = 2004;
	movie1->MinutesDuration = 115;
	Movie* movie = MakeMovie("Rage", 128, 2017, Action, 7.1);
	Movie* movies = new Movie[10];
	movies[0] = *MakeMovie("A", 213, 2013, Action, 4.4);
	movies[1] = *MakeMovie("B", 133, 2013, Horror, 5.7);
	movies[2] = *MakeMovie("C", 90, 2013, Horror, 10.0);
	movies[3] = *MakeMovie("D", 87, 2013, Drama, 6.5);
	movies[4] = *MakeMovie("E", 120, 2013, Comedy, 2.2);
	movies[5] = *MakeMovie("F", 137, 2013, Comedy, 9.2);
	movies[6] = *MakeMovie("G", 124, 2013, BlockBuster, 7.3);
	movies[7] = *MakeMovie("H", 97, 2013, Thriller, 5.9);
	movies[8] = *MakeMovie("K", 143, 2013, Comedy, 8.1);
	movies[9] = *MakeMovie("L", 211, 2013, Action, 7.2);
	cout << "Action movies counter " << CountMoviesByGenre(movies, 10, Action);
	Movie* bestGenreMovie = FindBestGenreMovie(movies, 10, Comedy);
	cout << "Best comedy movie: " << bestGenreMovie->Name << ",  ";
	WriteGenre(bestGenreMovie->Genre);
	cout << ", " << bestGenreMovie->Year << ", duration " << bestGenreMovie->MinutesDuration <<
		", rating " << bestGenreMovie->Rating << endl;
	delete movie1;
	delete movie;
}

int CountMoviesByGenre(Movie* movies, int count, Genre findedGenre)
{
	int movieCounter = 0;
	for (int i = 0; i < count; i++)
	{
		if (movies[i].Genre == findedGenre)
		{
			movieCounter++;
		}
	}
	return movieCounter;
}

Movie* FindBestGenreMovie(Movie* movies, int count, Genre findedGenre)
{
	Movie* bestGenreMovie = nullptr;
	double topRating = 0.0;
	for (int i = 0; i < count; i++)
	{
		if (movies[i].Genre == findedGenre && movies[i].Rating > topRating)
		{
			bestGenreMovie = &movies[i];
			topRating = movies[i].Rating;
		}
	}
	return bestGenreMovie;
}
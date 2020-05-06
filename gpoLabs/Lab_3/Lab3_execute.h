#pragma once
#include "Book.h"
#include "Route.h"
#include "Rectangle.h"
#include "Flight.h"
#include "Band.h"
#include "../Common/ConsoleOutput/ConsoleOutput.h"
#include "../Common/InputChecking/IntegerReading.h"

void Lab3();


void DemoBook();
void WriteBookInConsole(Book& book);
void ReadBookFromConsole(string& name, short& year, short& pages, short&
	authorsCount, string*& authors);
Book* FindBookByAuthor(Book* books, short booksCount, string author);

void DemoRoute();
void WriteRouteInCounsole(Route& route);
void ReadRouteFromConsole(int& number, int& timeAvgMinutes, int& frequencyMinutes,
	int& stopsCount, string*& stops);
Route* FindRouteByStop(Route* routes, int routesCount, string stopName);

void DemoRectangleWithPoint();

void DemoFlightWithTime();
void WriteFlightToConsole(Flight* flight);
void WriteTimeToConsole(Time* time);
Time GetFlightTimeMinutes(Flight* flight);

void DemoBand();
void WriteBandInfoToConsole(Band* band);
void WriteSongToConsole(Song* song);
void WriteSongsToConsole(Song* song, int songCount);
void WriteAlbumToConsole(Album* album);
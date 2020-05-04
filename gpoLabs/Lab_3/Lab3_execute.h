#pragma once
#include "Book.h"
#include "Route.h"
#include "cRectangle.h"
#include "cFlight.h"
#include "cBand.h"
#include "../Common/ConsoleOutput/ConsoleOutput.h"
#include "../Common/InputChecking/IntegerReading.h"

void Lab3();

/*Задания 3.2.1-5*/
/*Демонстрация работы класса Book*/
void DemoBook();
void WriteBookInConsole(Book& book);
void ReadBookFromConsole(string& name, short& year, short& pages, short&
	authorsCount, string*& authors);
Book* FindBookByAuthor(Book* books, short booksCount, string author);

/*Задание 3.2.6*/
/*Демонстрация работы класса Route*/
void DemoRoute();
void WriteRouteInCounsole(Route& route);
void ReadRouteFromConsole(int& number, int& timeAvgMinutes, int& frequencyMinutes,
	int& stopsCount, string*& stops);
Route* FindRouteByStop(Route* routes, int routesCount, string stopName);

/*Задания 3.3.1-5*/
/*Демонстрация работы классов Point и cRectangle*/
void DemoRectangleWithPoint();

/*Задания 3.3.7-11*/
/*Демонстрация работы классов cTime и cFlight*/
void DemoFlightWithTime();
void WriteFlightToConsole(cFlight* flight);
void WriteTimeToConsole(cTime* time);
cTime GetFlightTimeMinutes(cFlight* flight);

/*Задания 3.4.х 3.5.х*/
/*Демонстарция работы классов cSong cAlbum cBand*/
void DemoBand();
void WriteBandInfoToConsole(cBand* band);
void WriteSongToConsole(cSong* song);
void WriteSongsToConsole(cSong* song, int songCount);
void WriteAlbumToConsole(cAlbum* album);
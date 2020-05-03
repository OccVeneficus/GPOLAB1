#pragma once
#include "Book.h"
#include "Route.h"
#include "cRectangle.h"
#include "cFlight.h"
#include "cBand.h"
#include "../Common/ConsoleOutput/ConsoleOutput.h"
#include "../Common/InputChecking/IntegerReading.h"

void Lab3();

/*������� 3.2.1-5*/
/*������������ ������ ������ Book*/
void DemoBook();
void WriteBookInConsole(Book& book);
void ReadBookFromConsole(string& name, short& year, short& pages, short&
	authorsCount, string*& authors);
Book* FindBookByAuthor(Book* books, short booksCount, string author);

/*������� 3.2.6*/
/*������������ ������ ������ Route*/
void DemoRoute();
void WriteRouteInCounsole(Route& route);
void ReadRouteFromConsole(int& number, int& timeAvgMinutes, int& frequencyMinutes,
	int& stopsCount, string*& stops);
Route* FindRouteByStop(Route* routes, int routesCount, string stopName);

/*������� 3.3.1-5*/
/*������������ ������ ������� Point � cRectangle*/
void DemoRectangleWithPoint();

/*������� 3.3.7-11*/
/*������������ ������ ������� cTime � cFlight*/
void DemoFlightWithTime();
void WriteFlightToConsole(cFlight* flight);
void WriteTimeToConsole(cTime* time);
cTime GetFlightTimeMinutes(cFlight* flight);

/*������� 3.4.� 3.5.�*/
/*������������ ������ ������� cSong cAlbum cBand*/
void DemoBand();
void WriteBandInfoToConsole(cBand* band);
void WriteSongToConsole(cSong* song);
void WriteSongsToConsole(cSong* song, int songCount);
void WriteAlbumToConsole(cAlbum* album);
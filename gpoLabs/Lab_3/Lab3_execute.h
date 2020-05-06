#pragma once
#include "Book.h"
#include "Route.h"
#include "Rectangle.h"
#include "Flight.h"
#include "Band.h"
#include "../Common/ConsoleOutput/ConsoleOutput.h"
#include "../Common/InputChecking/IntegerReading.h"

void Lab3();

/*Çàäàíèÿ 3.2.1-5*/// TODO:зашакаленные комментарии
/*Äåìîíñòðàöèÿ ðàáîòû êëàññà Book*/
void DemoBook();
void WriteBookInConsole(Book& book);
void ReadBookFromConsole(string& name, short& year, short& pages, short&
	authorsCount, string*& authors);
Book* FindBookByAuthor(Book* books, short booksCount, string author);

/*Çàäàíèå 3.2.6*/
/*Äåìîíñòðàöèÿ ðàáîòû êëàññà Route*/
void DemoRoute();
void WriteRouteInCounsole(Route& route);
void ReadRouteFromConsole(int& number, int& timeAvgMinutes, int& frequencyMinutes,
	int& stopsCount, string*& stops);
Route* FindRouteByStop(Route* routes, int routesCount, string stopName);

/*Çàäàíèÿ 3.3.1-5*/
/*Äåìîíñòðàöèÿ ðàáîòû êëàññîâ Point è cRectangle*/
void DemoRectangleWithPoint();

/*Çàäàíèÿ 3.3.7-11*/
/*Äåìîíñòðàöèÿ ðàáîòû êëàññîâ cTime è cFlight*/
void DemoFlightWithTime();
void WriteFlightToConsole(Flight* flight);
void WriteTimeToConsole(Time* time);
Time GetFlightTimeMinutes(Flight* flight);

/*Çàäàíèÿ 3.4.õ 3.5.õ*/
/*Äåìîíñòàðöèÿ ðàáîòû êëàññîâ cSong cAlbum cBand*/
void DemoBand();
void WriteBandInfoToConsole(Band* band);
void WriteSongToConsole(Song* song);
void WriteSongsToConsole(Song* song, int songCount);
void WriteAlbumToConsole(Album* album);
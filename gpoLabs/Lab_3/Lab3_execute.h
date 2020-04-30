#pragma once
#include "Book.h"
#include "Route.h"
#include "cRectangle.h"
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
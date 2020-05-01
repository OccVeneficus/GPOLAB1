#include "Lab3_execute.h"

void Lab3()
{
	//cout << "Demo Book: " << endl;
	//DemoBook();
	//cout << "Demo Route: " << endl;
	//DemoRoute();
	//cout << "Demo Rectangle: " << endl;
	//DemoRectangleWithPoint();
	cout << "Demo Flight: " << endl;
	DemoFlightWithTime();
}

void DemoBook()
{
	string name;
	short year;
	short authorsCount;
	short pages;
	string* authors;
	Book* books = new Book[3];
	for (int i = 0; i < 3; i++)
	{
		cout << "Book #" << i + 1 << endl;
		ReadBookFromConsole(name, year, pages, authorsCount, authors);
		Book newBook(name, year, pages, authorsCount, authors);
		books[i] = newBook;
	}
	for (int i = 0; i < 3; i++)
	{
		WriteBookInConsole(books[i]);
	}
	system("pause");
	cout << endl << "Enter author name: ";
	cin.clear();
	string author;
	getline(cin, author);
	Book* book = FindBookByAuthor(books, 3, author);
	if (book != nullptr)
	{
		cout << "Finded: ";
		WriteBookInConsole(*book);
	}
	else
	{
		cout << "There is no book with this autor.";
	}
	system("pause");
	delete[] books;
	delete[] authors;
}

void WriteBookInConsole(Book& book)
{
	for (int i = 0; i < book.GetAutorsCount() - 1; i++)
	{
		cout << book.GetAuthors()[i] << ", ";
	}
	cout << book.GetAuthors()[book.GetAutorsCount() - 1] << " ";
	cout << book.GetName() << ". ";
	cout << book.GetYear() << ". ";
	cout << "- " << book.GetPages() << "p." << endl;
}

void ReadBookFromConsole(string& name, short& year, short& pages, short&
	authorsCount, string*& authors)
{
	cout << "Enter book name:";
	cin.clear();
	getline(cin, name);
	cout <<"Input book year(from 1 to 2020):";
	year = ReadValueInRange(1, 2020);
	cout <<"Input number of pages:";
	pages = ReadValueInRange(1, SHRT_MAX);
	cout <<"Input amount of book authors:";
	authorsCount = ReadValueInRange(1, 10);
	authors = new string[authorsCount];
	for (int i = 0; i < authorsCount; i++)
	{
		cin.clear();
		cout << "Enter author #" << i + 1 << ":";
		getline(cin, authors[i]);
	}
	cout << endl;
}

Book* FindBookByAuthor(Book* books, short booksCount, string author)
{
	Book* book;
	for (int i = 0; i < booksCount; i++)
	{
		if ((book = books[i].FindAuthor(author)) != nullptr)
		{
			return book;
		}
	}
	return nullptr;
}

void DemoRoute()
{
	int number;
	int timeAvgMinutes;
	int frequencyMinutes;
	int stopsCount;
	string* stops;
	Route* routes = new Route[1];
	for (int i = 0; i < 1; i++)
	{
		cout << "Route #" << i + 1 << endl;
		ReadRouteFromConsole(number,timeAvgMinutes,frequencyMinutes,stopsCount,
		stops);
		Route newRoute(number, timeAvgMinutes, frequencyMinutes, stopsCount,
			stops);
		routes[i] = newRoute;
	}
	for (int i = 0; i < 1; i++)
	{
		WriteRouteInCounsole(routes[i]);
	}
	cout << endl << "Enter stop name: ";
	string name;
	cin.clear();
	getline(cin, name);
	Route* route = FindRouteByStop(routes, 1, name);
	if (route != nullptr)
	{
		cout << "Route with this stop: ";
		WriteRouteInCounsole(*route);
	}
	else
	{
		cout << "There is no route with this stop." << endl;
	}
	system("pause");
	delete[] routes;
	delete[] stops;
}

void WriteRouteInCounsole(Route& route)
{
	for (int i = 0; i < route.GetStopsCount() - 1; i++)
	{
		cout << route.GetStops()[i] << " - ";
	}
	cout << route.GetStops()[route.GetStopsCount() - 1] << ". ";
	cout << "#" << route.GetNumber() << " Avg. " << route.GetTimeAvgMinutes() <<
		" min. " << " frequency: " << route.GetFrequencyMinutes() <<
		" min." << endl;
}

void ReadRouteFromConsole(int& number, int& timeAvgMinutes, int& frequencyMinutes,
	int& stopsCount, string*& stops)
{
	cout << "Enter route number (from 0 to 2 147 483 647): ";
	number = ReadValueInRange<int>(0, INT_MAX);
	cout << "Enter average time of route in minutes (from 1 to 60):";
	timeAvgMinutes = ReadValueInRange(1, 60);
	cout << "Enter route frequency in minutes (from 1 to 100):";
	frequencyMinutes = ReadValueInRange(1, 100);
	cout << "Enter number of stops on the route (from 1 to 10):";
	stopsCount = ReadValueInRange(1, 10);
	stops = new string[stopsCount];
	for (int i = 0; i < stopsCount; i++)
	{
		cout << "Enter stop name #" << i + 1 << ": ";
		cin.clear();
		getline(cin, stops[i]);
	}
}

Route* FindRouteByStop(Route* routes, int routesCount, string stopName)
{
	Route* route;
	for (int i = 0; i < routesCount; i++)
	{
		if ((route = routes[i].FindStop(stopName)) != nullptr)
		{
			return route;
		}
	}
	return nullptr;
}

void DemoRectangleWithPoint()
{
	cRectangle* rectangles = new cRectangle[5];
	rectangles[0] = cRectangle(11.2,21.6,&Point(-22.3,1.3));
	rectangles[1] = cRectangle(11.6, 13.1, &Point(32.1, -33.3));
	rectangles[2] = cRectangle(5.8, 2.3, &Point(0.5, 0));
	rectangles[3] = cRectangle(10.1, 9.3, &Point(-32.5, 33.0));
	rectangles[4] = cRectangle(13.3, 4.8, &Point(0, 100.1));
	for (int i = 0; i < 5; i++ )
	{
		cout << "X = " << rectangles[i].GetCentre()->GetX() << "; Y = " <<
			rectangles[i].GetCentre()->GetY() << "; Length = " <<
			rectangles[i].Getlength() << "; Width = " <<
			rectangles[i].GetWidth() << endl;
	}
	double sumX = 0;
	double sumY = 0;
	for (int i = 0; i < 5; i++)
	{
		sumX = sumX + rectangles[i].GetCentre()->GetX();
		sumY = sumY + rectangles[i].GetCentre()->GetY();
	}
	cout << "Xcenter = " << sumX / 5 << "; Ycenter = " << sumY / 5;
	delete[] rectangles;
	system("pause");
}

void DemoFlightWithTime()
{
	cFlight* flights = new cFlight[5];
	flights[0] = cFlight(rand()%9999999,"Tomsk","Moscow",
		&cTime(2020,6,23,13,43), &cTime(2020,6,23,17,50));
	flights[1] = cFlight(rand() % 9999999, "Sochi", "Ekaterinburg",
		&cTime(2020, 5, 12, 3, 0), &cTime(2020, 5, 12, 5, 30));
	flights[2] = cFlight(rand() % 9999999, "Petrozavodsk", "Moscow",
		&cTime(2020, 12, 22, 15, 10), &cTime(2020, 12, 22, 17, 10));
	flights[3] = cFlight(rand() % 9999999, "Novosibirsk", "Kaliningrad",
		&cTime(2020, 3, 5, 0, 10), &cTime(2020, 3, 5, 5, 20));
	flights[4] = cFlight(rand() % 9999999, "Abakan", "Tver",
		&cTime(2020, 7, 7, 7, 7), &cTime(2020, 7, 7, 10, 17));
	for (int i = 0; i < 5; i++)
	{
		WriteFlightToConsole(&flights[i]);
	}
}

void WriteFlightToConsole(cFlight* flight)
{
	cout << flight->GetNumber() << " " << flight->GetPointOfDeparture() << " - "
		<< flight->GetPointOfArrival() << " departure time ";
	WriteTimeToConsole(flight->GetTimeOfDeparture());
	cout << " arrival time ";
	WriteTimeToConsole(flight->GetTimeOFArrival());
	cout << endl;
}

void WriteTimeToConsole(cTime* time)
{
	cout << time->GetDay() << '.' << time->GetMonth() << '.' << time->GetYear() << ' '
		<< time->GetHour() << ':' << time->GetMinute();
}

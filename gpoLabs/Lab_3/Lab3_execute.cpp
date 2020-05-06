#include "Lab3_execute.h"
#include "../Common/Consts/Consts.h"

void Lab3()
{
	cout << "Demo book: " << endl;
	DemoBook();
	cout << endl << "_________________________________________________" << endl;
	cout << "Demo Route: " << endl;
	DemoRoute();
	cout << endl << "_________________________________________________" << endl;
	cout << "Demo Rectangle: " << endl;
	DemoRectangleWithPoint();
	cout << endl << "_________________________________________________" << endl;
	cout << "Demo Flight: " << endl;
	DemoFlightWithTime();
	cout << endl << "_________________________________________________" << endl;
	cout << "DemoBand: " << endl;
	DemoBand();
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
	for (int i = 0; i < book.GetAuthorsCount() - 1; i++)
	{
		cout << book.GetAuthors()[i] << ", ";
	}
	cout << book.GetAuthors()[book.GetAuthorsCount() - 1] << " ";
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
	Route* routes = new Route[3];
	for (int i = 0; i < 3; i++)
	{
		cout << "Route #" << i + 1 << endl;
		ReadRouteFromConsole(number,timeAvgMinutes,frequencyMinutes,stopsCount,
		stops);
		Route newRoute(number, timeAvgMinutes, frequencyMinutes, stopsCount,
			stops);
		routes[i] = newRoute;
	}
	for (int i = 0; i < 3; i++)
	{
		WriteRouteInCounsole(routes[i]);
	}
	cout << endl << "Enter stop name: ";
	string name;
	cin.clear();
	getline(cin, name);
	Route* route = FindRouteByStop(routes, 3, name);
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

void ReadRouteFromConsole(int& number, int& timeAvgMinutes,
	int& frequencyMinutes, int& stopsCount, string*& stops)
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
	Rectangle* rectangles = new Rectangle[5];
	rectangles[0] = Rectangle(11.2,21.6,&Point(-22.3,1.3));
	rectangles[1] = Rectangle(11.6, 13.1, &Point(32.1, -33.3));
	rectangles[2] = Rectangle(5.8, 2.3, &Point(0.5, 0));
	rectangles[3] = Rectangle(10.1, 9.3, &Point(-32.5, 33.0));
	rectangles[4] = Rectangle(13.3, 4.8, &Point(0, 100.1));
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
	Flight* flights = new Flight[5];
	flights[0] = Flight(rand()%9999999,"Tomsk","Moscow",
		&Time(2020,6,23,13,43), &Time(2020,6,23,17,50));
	flights[1] = Flight(rand() % 9999999, "Sochi", "Ekaterinburg",
		&Time(2020, 5, 12, 3, 0), &Time(2020, 5, 13, 5, 30));
	flights[2] = Flight(rand() % 9999999, "Petrozavodsk", "Moscow",
		&Time(2020, 12, 22, 15, 10), &Time(2020, 12, 22, 17, 10));
	flights[3] = Flight(rand() % 9999999, "Novosibirsk", "Kaliningrad",
		&Time(2020, 3, 5, 0, 10), &Time(2020, 3, 5, 5, 20));
	flights[4] = Flight(rand() % 9999999, "Abakan", "Tver",
		&Time(2020, 7, 7, 7, 7), &Time(2020, 7, 7, 10, 17));
	for (int i = 0; i < 5; i++)
	{
		WriteFlightToConsole(&flights[i]);
		cout << endl;
	}
	cout << endl;
	cout << "Flight ";
	WriteFlightToConsole(&flights[1]);
	cout << " time in flight: ";
	WriteTimeToConsole(&GetFlightTimeMinutes(&flights[1]));
	cout << endl;
	delete[] flights;
	system("pause");
}

void WriteFlightToConsole(Flight* flight)
{
	cout << flight->GetNumber() << " " <<
		flight->GetPointDeparture() << " - "
		<< flight->GetPointArrival() << " departure ";
	WriteTimeToConsole(flight->GetTimeDeparture());
	cout << " arrival ";
	WriteTimeToConsole(flight->GetTimeArrival());
}

void WriteTimeToConsole(Time* time)
{
	cout << time->GetDay() << '.' << time->GetMonth() << '.' << 
		time->GetYear() << ' ' << time->GetHour() << ':' << time->GetMinute();
}

Time GetFlightTimeMinutes(Flight* flight)
{
	Time timeInFlight(0,0,0,0,0);
	int days = flight->GetTimeArrival()->GetDay() - 
		flight->GetTimeDeparture()->GetDay();
	int hours = flight->GetTimeArrival()->GetHour() - 
		flight->GetTimeDeparture()->GetHour();
	int minutes = flight->GetTimeArrival()->GetMinute() - 
		flight->GetTimeDeparture()->GetMinute();
	if (days != 0)
	{
		hours = MAX_HOUR + hours;
		minutes = MAX_MINUTES - minutes;
		if (minutes >= MAX_MINUTES)
		{
			hours++;
			minutes = minutes - 60;
		}
		if (hours >= MAX_HOUR)
		{
			days = 1;
			hours = hours - MAX_HOUR;
			timeInFlight.SetDay(days);
			timeInFlight.SetHour(hours);
			timeInFlight.SetMinute(minutes);
			return timeInFlight;
		}
		timeInFlight.SetHour(hours);
		timeInFlight.SetMinute(minutes);
		return timeInFlight;
	}
	else
	{
		timeInFlight.SetHour(hours);
		timeInFlight.SetMinute(minutes);
		return timeInFlight;
	}
}

void DemoBand()
{
	Song* songsFirst = new Song[4];
	songsFirst[0] = Song(123, "Banya", Rock);
	songsFirst[1] = Song(233, "Lesniik", Pop);
	songsFirst[2] = Song(343, "30 years", EDM);
	songsFirst[3] = Song(200, "Bomj", Country);

	Song* songsSecond = new Song[5];
	songsSecond[0] = Song(413, "Cake", EDM);
	songsSecond[1] = Song(213, "Step", Techno);
	songsSecond[2] = Song(323, "Dont", Techno);
	songsSecond[3] = Song(223, "facebook", EDM);
	songsSecond[4] = Song(261, "last stand", Techno);

	Song* songsThird = new Song[3];
	songsThird[0] = Song(232, "The", Pop);
	songsThird[1] = Song(241, "Back", Rock);
	songsThird[2] = Song(360, "Take", Country);

	Album* albums = new Album[3];
	albums[0].SetName("Mass");
	albums[0].SetYear(1999);
	albums[0].SetSongs(songsFirst, 4);

	albums[1].SetName("Afterlife");
	albums[1].SetYear(2001);
	albums[1].SetSongs(songsSecond, 5);

	albums[2].SetName("Effect");
	albums[2].SetYear(2019);
	albums[2].SetSongs(songsThird, 3);

	Band band("Cerberus","Sample_text",albums,3);
	
	WriteBandInfoToConsole(&band);

	int songCount = 0;
	cout << endl << "All songs:" << endl;
	Song** allSongs = band.GetAllSongs(songCount);
	for (int i = 0; i < songCount; i++)
	{
		WriteSongToConsole(allSongs[i]);
		cout << endl;
	}

	cout << endl << "All rock songs: " << endl;
	Song** allGenreSongs = band.GetAllGenreSongs(songCount, Rock);
	for (int i = 0; i < songCount; i++)
	{
		WriteSongToConsole(allGenreSongs[i]);
		cout << endl;
	}

	cout << endl << "Searching track The: " << endl;
	WriteSongToConsole(band.FindSong("The"));

	cout << endl <<"Searching album with The: " << endl;
	WriteAlbumToConsole(band.FindAlbum("The"));
	cout << endl;

	delete[] songsFirst;
	delete[] songsSecond;
	delete[] songsThird;
	system("pause");
}

void WriteBandInfoToConsole(Band* band)
{
	cout << "Band " << band->GetName() << endl;
	for (int i = 0; i < band->GetAlbumCount(); i++)
	{
		WriteAlbumToConsole(&band->GetAlbum()[i]);
	}
}

void WriteSongToConsole(Song* song)
{
	cout << "\"" << song->GetName() << "\"" << " genre ";
	WriteSongGenreToConsole(song->GetGenre());
	cout << " duration:" << song->GetDurationSeconds();
}

void WriteSongsToConsole(Song* song, int songCount)
{
	for (int i = 0; i < songCount; i++)
	{
		WriteSongToConsole(&song[i]);
		cout << endl;
	}
}

void WriteAlbumToConsole(Album* album)
{
	cout << "Album ";
	cout << album->GetName();
	cout << endl << "Song list " << endl;
	WriteSongsToConsole(album->GetSongs(),
		album->GetSongCounter());
	cout << endl;
}

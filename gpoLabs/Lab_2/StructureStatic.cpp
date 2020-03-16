#include "StructureStatic.h"
#include <iostream>
#include "Flight.h"
#include "Movie.h"
#include "Rectangle.h"
#include "StructureFunction.h"

using namespace std;

void DemoRectangle()
{
	/*2.2.3.1*/
	Rectangle rectangle;
	rectangle.Color = "Red";
	rectangle.Length = 6.3;
	rectangle.Width = 3.1;

	/*2.2.3.2*/
	Rectangle rectangleKeyInput;
	cout << "Enter rectangle paramenters:" << endl;
	cout << "Enter color: ";
	getline(cin, rectangleKeyInput.Color);
	cout << "Enter length (positive number): ";
	cin >> rectangleKeyInput.Length;
	cout << "Enter width: ";
	cin >> rectangleKeyInput.Width;
	//TODO: комментарий зашакалился. Точно установил сохранение в unicode в студии? Пересохранил файлы с новой кодировкой?
	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	cout << "Rectangle color " << rectangleKeyInput.Color <<
		", size: " << rectangleKeyInput.Length << 'x' <<
		rectangleKeyInput.Width << endl;

	/*2.2.3.3*/
	Rectangle* arrayRectangles = new Rectangle[3];
	arrayRectangles[0].Color = "Red";
	arrayRectangles[0].Length = 12;
	arrayRectangles[0].Width = 3;

	arrayRectangles[1].Color = "Green";
	arrayRectangles[1].Length = 32;
	arrayRectangles[1].Width = 2;

	arrayRectangles[2].Color = "Blue";
	arrayRectangles[2].Length = 22;
	arrayRectangles[2].Width = 8;

	for (int i = 0; i < 3; i++)
	{
		cout << "Rectangle " << i << " color " << arrayRectangles[i].Color <<
			", size: " << arrayRectangles[i].Length << 'x' <<
			arrayRectangles[i].Width << endl;
	}
	delete[] arrayRectangles;

	/*2.2.4.1*/
	Rectangle* pRectangle = &rectangle;
	cout << "2.2.3.1 rectangle color " << pRectangle->Color <<
		", size " << pRectangle->Length << 'x' << pRectangle->Width << endl;
	pRectangle->Color = "Yellow";
	pRectangle->Length = 9.2;
	pRectangle->Width = 5.4;

	/*2.2.4.2*/
	Rectangle* secondPointer = &rectangle;
	cout << endl << "First pointer addres: " << pRectangle << endl <<
		"Second pointer addres: " << secondPointer << endl;

	/*2.2.5.4*/
	cout << endl << "Task 2.2.5.4." << endl;
	WriteRectangle(rectangle);
	WriteRectangle(rectangleKeyInput);
	Exchange(rectangle, rectangleKeyInput);
	cout << "After exchange:" << endl;
	WriteRectangle(rectangle);
	WriteRectangle(rectangleKeyInput);
}

void DemoFligth()
{
	/*2.2.3.1*/
	Flight flight;
	flight.Arrival = "Moscow";
	flight.Departure = "London";
	flight.MinutesFlightTime = 188;

	/*2.2.3.2*/
	Flight flightKeyInput;
	cout << endl << "Enter flight parameters: " << endl;
	cout << "Departure city: ";
	getline(cin, flightKeyInput.Departure);
	cout << "Arrival city: ";
	getline(cin, flightKeyInput.Arrival);
	cout <<"Flight time in minutes: ";
	cin >> flightKeyInput.MinutesFlightTime;
	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	cout << "Flight " << flightKeyInput.Departure <<
		" - " << flightKeyInput.Arrival << " in flight time " <<
		flightKeyInput.MinutesFlightTime << endl;

	/*2.2.3.3*/
	Flight* arrayFilghts = new Flight[3];
	arrayFilghts[0].Departure = "Moscow";
	arrayFilghts[0].Arrival = "London";
	arrayFilghts[0].MinutesFlightTime = 165;

	arrayFilghts[1].Departure = "Paris";
	arrayFilghts[1].Arrival = "Miami";
	arrayFilghts[1].MinutesFlightTime = 454;

	arrayFilghts[2].Departure = "Saratov";
	arrayFilghts[2].Arrival = "Mahachkala";
	arrayFilghts[2].MinutesFlightTime = 90;

	for (int i = 0; i < 3; i++)
	{
		cout << "Flight " << i << ' ' << arrayFilghts[i].Departure <<
			" - " << arrayFilghts[i].Arrival << " in flight time " <<
			arrayFilghts[i].MinutesFlightTime << endl;
	}
	delete[] arrayFilghts;

	/*2.2.4.3*/
	Flight* pFlight = &flight;
	cout << "2.2.3.1 Flight " << pFlight->Departure <<
		" - " << pFlight->Arrival << " in flight time " <<
		pFlight->MinutesFlightTime << endl;
	pFlight->Arrival = "Nur-sultan";
	pFlight->Departure = "Washington";
	pFlight->MinutesFlightTime = 322;

	Flight* secondPointer = &flight;
	cout << endl << "First pointer addres: " << pFlight << endl <<
		"Second pointer addres: " << secondPointer << endl;
}

void DemoMovie()
{
	/*2.2.3.1*/
	Movie movie;
	movie.Genre = BlockBuster;
	movie.DurationMinutes = 164;
	movie.Name = "Interstellar";
	movie.Rating = 8.6;
	movie.Year = 2014;

	/*2.2.3.2*/
	Movie movieKeyboardInput;
	cout << endl << "Enter movie parameters:" << endl;
	cout << "Enter movie name: ";
	getline(cin, movieKeyboardInput.Name);
	cout << "Enter movie genre: ";
	movieKeyboardInput.Genre = ReadGenre();
	cout << "Enter movie release year: ";
	cin >> movieKeyboardInput.Year;
	cout <<"Enter movie rating: ";
	cin >> movieKeyboardInput.Rating;
	cout << "Enter movie duration in minutes: ";
	cin >> movieKeyboardInput.DurationMinutes;
	cout << " Movie " << movieKeyboardInput.Name << ", ";
	WriteGenre(movieKeyboardInput.Genre);
	cout << ", year " << movieKeyboardInput.Year <<
		", duration " << movieKeyboardInput.DurationMinutes
		<< ", rating " << movieKeyboardInput.Rating << endl;

	/*2.2.3.3*/
	Movie* arrayMovies = new Movie[3];
	arrayMovies[0].Name = "Pi";
	arrayMovies[0].Genre = Drama;
	arrayMovies[0].DurationMinutes = 178;
	arrayMovies[0].Rating = 8.3;
	arrayMovies[0].Year = 2013;

	arrayMovies[1].Name = "Saw";
	arrayMovies[1].Genre = Horror;
	arrayMovies[1].DurationMinutes = 138;
	arrayMovies[1].Rating = 7.6;
	arrayMovies[1].Year = 2010;

	arrayMovies[2].Name = "Lord of the Rings";
	arrayMovies[2].Genre = BlockBuster;
	arrayMovies[2].DurationMinutes = 210;
	arrayMovies[2].Rating = 9.1;
	arrayMovies[2].Year = 1999;

	for (int i = 0; i < 3; i++)
	{
		cout << i << " Movie " << arrayMovies[i].Name << ", ";
		WriteGenre(arrayMovies[i].Genre);
		cout << ", year " << arrayMovies[i].Year << ", duration " <<
			arrayMovies[i].DurationMinutes
			<< ", rating " << arrayMovies[i].Rating << endl;
	}
	delete[] arrayMovies;

	/*2.2.3.4*/
	Movie* pMovie = &movie;
	cout << " Movie " << pMovie->Name << ", ";
	WriteGenre(pMovie->Genre);
	cout << ", year " << pMovie->Year << ", duration " << pMovie->DurationMinutes
		<< ", rating " << pMovie->Rating << endl;
	pMovie->Name = "American pie";
	pMovie->Genre = Drama;
	pMovie->DurationMinutes = 999;
	pMovie->Rating = 66.6;
	pMovie->Year = 2000;

	Movie* secondPointer = &movie;
	cout << endl << "First pointer addres: " << pMovie << endl <<
		"Second pointer addres: " << secondPointer << endl;
}

/*2.2.4.4*/
void WrongPointers()
{
	Flight flight;
	Movie movie;
	Flight* pFlight = &flight;
	Movie* pMovie = &movie;

	//pFlight = &movie;
	//pMovie = &flight;
}
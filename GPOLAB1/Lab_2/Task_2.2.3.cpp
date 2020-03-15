#include "Task_2.2.2.1.h"
#include "SecondLabTasks.h"
#include <limits>

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
	cout << endl << "Enter length (positive number): ";
	cin >> rectangleKeyInput.Length;
	cout << endl << "Enter width: ";
	cin >> rectangleKeyInput.Width;
	/*символ новой строки не очищается из потока и когда доходит до getline, то оно берет
	этот символ из потока и идет дальше, поэтому cin.ignore(...)*/
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
}

void DemoFligth()
{
	/*2.2.3.1*/
	Flight flight;
	flight.Arrival = "Moscow";
	flight.Departure = "London";
	flight.MinutesTimeOfFlight = 188;

	/*2.2.3.2*/
	Flight flightKeyInput;
	cout << endl <<"Enter flight parameters: " << endl;
	cout << "Departure city: ";
	getline(cin, flightKeyInput.Departure);
	cout << endl << "Arrival city: ";
	getline(cin, flightKeyInput.Arrival);
	cout << endl << "Flight time in minutes: ";
	cin >> flightKeyInput.MinutesTimeOfFlight;
	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	cout << "Flight " << flightKeyInput.Departure <<
		" - " << flightKeyInput.Arrival << " in flight time " <<
		flightKeyInput.MinutesTimeOfFlight << endl;

	/*2.2.3.3*/
	Flight* arrayFilghts = new Flight[3];
	arrayFilghts[0].Departure = "Moscow";
	arrayFilghts[0].Arrival = "London";
	arrayFilghts[0].MinutesTimeOfFlight = 165;

	arrayFilghts[1].Departure = "Paris";
	arrayFilghts[1].Arrival = "Miami";
	arrayFilghts[1].MinutesTimeOfFlight = 454;

	arrayFilghts[2].Departure = "Saratov";
	arrayFilghts[2].Arrival = "Mahachkala";
	arrayFilghts[2].MinutesTimeOfFlight = 90;

	for (int i = 0; i < 3; i++)
	{
		cout << "Flight " << i << ' ' << arrayFilghts[i].Departure <<
			" - " << arrayFilghts[i].Arrival << " in flight time " <<
			arrayFilghts[i].MinutesTimeOfFlight << endl;
	}
	delete[] arrayFilghts;
}

void DemoMovie()
{
	/*2.2.3.1*/
	Movie movie;
	movie.Genre = "SciFi";
	movie.MinutesDuration = 164;
	movie.Name = "Interstellar";
	movie.Rating = 8.6;
	movie.Year = 2014;

	/*2.2.3.2*/
	Movie movieKeyboardInput;
	cout << endl <<"Enter movie parameters:" << endl;
	cout << "Enter movie name: ";
	getline(cin, movieKeyboardInput.Name);
	cout << endl << "Enter movie genre: ";
	getline(cin, movieKeyboardInput.Genre);
	cout << endl << "Enter movie release year: ";
	cin >> movieKeyboardInput.Year;
	cout << endl << "Enter movie rating: ";
	cin >> movieKeyboardInput.Rating;
	cout << endl << "Enter movie duration in minutes: ";
	cin >> movieKeyboardInput.MinutesDuration;
	cout << " Movie " << movieKeyboardInput.Name << ", " <<
		movieKeyboardInput.Genre << ", year " << movieKeyboardInput.Year <<
		", duration " << movieKeyboardInput.MinutesDuration
		<< ", rating " << movieKeyboardInput.Rating << endl;

	/*2.2.3.3*/
	Movie* arrayMovies = new Movie[3];
	arrayMovies[0].Name = "Pi";
	arrayMovies[0].Genre = "drama";
	arrayMovies[0].MinutesDuration = 178;
	arrayMovies[0].Rating = 8.3;
	arrayMovies[0].Year = 2013;

	arrayMovies[1].Name = "Saw";
	arrayMovies[1].Genre = "Horror";
	arrayMovies[1].MinutesDuration = 138;
	arrayMovies[1].Rating = 7.6;
	arrayMovies[1].Year = 2010;

	arrayMovies[2].Name = "Lord of the Rings";
	arrayMovies[2].Genre = "Fantasy";
	arrayMovies[2].MinutesDuration = 210;
	arrayMovies[2].Rating = 9.1;
	arrayMovies[2].Year = 1999;

	for (int i = 0; i < 3; i++)
	{
		cout << i << " Movie " << arrayMovies[i].Name << ", " << arrayMovies[i].Genre
			<< ", year " << arrayMovies[i].Year << ", duration " << arrayMovies[i].MinutesDuration
			<< ", rating " << arrayMovies[i].Rating << endl;
	}
	delete[] arrayMovies;
}

void Task_2_2_3()
{
	cout << "Task 2.2.3.1, Task 2.2.3.2, Task 2.2.3.3;" << endl;
	DemoRectangle();
	DemoFligth();
	DemoMovie();
	cout << endl << "Done." << endl;
}
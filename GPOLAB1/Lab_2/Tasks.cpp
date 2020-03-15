#include "Tasks.h"
#include <exception>
#include <limits>


/*2.2.1.1 and 2.2.1.2*/
void Sort(double* values, int count)
{
	if (count <= 0)
	{
		throw exception("Error. Negative count.");
	}

	double swap;
	for (int i = 0; i < count; i++)
	{
		for (int j = 0; j < count; j++)
		{
			if (values[i] < values[j])
			{
				swap = values[i];
				values[i] = values[j];
				values[j] = swap;
			}
		}
	}
}

void DemoSort()
{
	int count = 5;
	double* values = new double[count] {100.0, 249.0, 12.0, 45.0, 23.5};
	Sort(values, count);

	count = -1;
	try
	{
		Sort(values, count);
	}
	catch (exception)
	{
		cout << "Exception catched!" << endl;
	}
}

/*2.2.3 | 2.2.4*/
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
	/*символ новой строки не очищается из потока и когда доходит до getline,
	то оно берет этот символ из потока и идет дальше, поэтому cin.ignore(...)*/
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
	cout << "Task 2.2.5.4:" << endl;
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
	flight.MinutesTimeOfFlight = 188;

	/*2.2.3.2*/
	Flight flightKeyInput;
	cout << endl << "Enter flight parameters: " << endl;
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

	/*2.2.4.3*/
	Flight* pFlight = &flight;
	cout << "2.2.3.1 Flight " << pFlight->Departure <<
		" - " << pFlight->Arrival << " in flight time " <<
		pFlight->MinutesTimeOfFlight << endl;
	pFlight->Arrival = "Nur-sultan";
	pFlight->Departure = "Washington";
	pFlight->MinutesTimeOfFlight = 322;

	Flight* secondPointer = &flight;
	cout << endl << "First pointer addres: " << pFlight << endl <<
		"Second pointer addres: " << secondPointer << endl;
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
	cout << endl << "Enter movie parameters:" << endl;
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
			<< ", year " << arrayMovies[i].Year << ", duration " <<
			arrayMovies[i].MinutesDuration
			<< ", rating " << arrayMovies[i].Rating << endl;
	}
	delete[] arrayMovies;

	/*2.2.3.4*/
	Movie* pMovie = &movie;
	cout << " Movie " << pMovie->Name << ", " << pMovie->Genre <<
		", year " << pMovie->Year << ", duration " << pMovie->MinutesDuration
		<< ", rating " << pMovie->Rating << endl;
	pMovie->Name = "American pie";
	pMovie->Genre = "Drama";
	pMovie->MinutesDuration = 999;
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

/*2.2.5.1*/
void WriteRectangle(Rectangle& rectangle)
{
	cout << "Rectangle color " << rectangle.Color << ", size " <<
		rectangle.Length << 'x' << rectangle.Width << endl;
}

/*2.2.5.2*/
void ReadRectangle(Rectangle& rectangle)
{
	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	cout << "Enter rectangle color: ";
	getline(cin, rectangle.Color);
	cout << "Enter rectangle length: ";
	cin >> rectangle.Length;
	cout << "Enter rectangle width: ";
	cin >> rectangle.Width;
}

/*2.2.5.3*/
void DemoReadAndWriteRectangles()
{
	Rectangle* arrayRectangle = new Rectangle[5];
	for (int i = 0; i < 5; i++)
	{
		cout << "Enter " << i + 1 << " rectangle";
		ReadRectangle(arrayRectangle[i]);
	}
	for (int i = 0; i < 5; i++)
	{
		cout << i + 1 << ": ";
		WriteRectangle(arrayRectangle[i]);
	}
	FindRectangle(arrayRectangle, 5);
	FindMaxRectangle(arrayRectangle, 5);
	delete[] arrayRectangle;
}

/*2.2.5.4*/
void Exchange(Rectangle& firstRectangle, Rectangle& secondRectangle)
{
	Rectangle tempRectangle;
	tempRectangle.Color = secondRectangle.Color;
	tempRectangle.Length = secondRectangle.Length;
	tempRectangle.Width = secondRectangle.Width;

	secondRectangle.Color = firstRectangle.Color;
	secondRectangle.Length = firstRectangle.Length;
	secondRectangle.Width = firstRectangle.Width;

	firstRectangle.Color = tempRectangle.Color;
	firstRectangle.Length = tempRectangle.Length;
	firstRectangle.Width = tempRectangle.Width;
}

/*2.2.5.5*/
void FindRectangle(Rectangle* rectangles, int count)
{
	Rectangle maxLengthRectangle;
	maxLengthRectangle.Color = rectangles[0].Color;
	maxLengthRectangle.Length = rectangles[0].Length;
	maxLengthRectangle.Width = rectangles[0].Width;
	for (int i = 0; i < count; i++)
	{
		if (rectangles[i].Length > maxLengthRectangle.Length)
		{
			maxLengthRectangle.Color = rectangles[i].Color;
			maxLengthRectangle.Length = rectangles[i].Length;
			maxLengthRectangle.Width = rectangles[i].Width;
		}
	}
	cout << "Rectangle with max length color " << maxLengthRectangle.Color <<
		", size " << maxLengthRectangle.Length << 'x' << maxLengthRectangle.Width
		<< endl;
}

/*2.2.5.6*/
void FindMaxRectangle(Rectangle* rectangles, int count)
{
	Rectangle maxSquareRectangle;
	maxSquareRectangle.Color = rectangles[0].Color;
	maxSquareRectangle.Length = rectangles[0].Length;
	maxSquareRectangle.Width = rectangles[0].Width;
	for (int i = 0; i < count; i++)
	{
		if ((rectangles[i].Length * rectangles[i].Width) > (maxSquareRectangle.Length
			* maxSquareRectangle.Width))
		{
			maxSquareRectangle.Color = rectangles[i].Color;
			maxSquareRectangle.Length = rectangles[i].Length;
			maxSquareRectangle.Width = rectangles[i].Width;
		}
	}
	cout << "Rectangle with max square color " << maxSquareRectangle.Color <<
		", size " << maxSquareRectangle.Length << 'x' << maxSquareRectangle.Width
		<< endl;
}

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

/*Execute all tasks*/
void Lab_2()
{
	cout << "Task 2.2.1.2:" << endl;
	DemoSort();
	system("pause");
	cout << "Tasks 2.2.3.1-3 and 2.2.4.1-4:" << endl;
	DemoRectangle();
	DemoFligth();
	DemoMovie();
	system("pause");
	cout << "Tasks 2.2.5.1-6:" << endl;
	DemoReadAndWriteRectangles();
	cout << "Tasks 2.2.6:" << endl;
	DemoDynamicFlight();
	DemoDynamicFlights();
}
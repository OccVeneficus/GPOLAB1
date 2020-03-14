#include "Task_2.2.2.1.h"
#include "SecondLabTasks.h"

void DemoRectangle()
{
	Rectangle rectangle;
	rectangle.Color = "Red";
	rectangle.Length = 6.3;
	rectangle.Width = 3.1;
}

void DemoFligth()
{
	Flight flight;
	flight.Arrival = "Moscow";
	flight.Departure = "London";
	flight.MinutesTimeOfFlight = 188;
}

void DemoMovie()
{
	Movie movie;
	movie.Genre = "SciFi";
	movie.MinutesDuration = 164;
	movie.Name = "Interstellar";
	movie.Rating = 8.6;
	movie.Year = 2014;
}

void Task_2_2_3_1()
{
	cout << "Task 2.2.3.1;" << endl;
	DemoRectangle();
	DemoFligth();
	DemoMovie();
	cout << "Structures created." << endl;
}
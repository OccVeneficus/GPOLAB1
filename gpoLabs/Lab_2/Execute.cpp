#include "Execute.h"
#include <iostream>

using namespace std;

void Lab_2()
{
	cout << "Task 2.2.1.1 and 2.2.1.2 - Exceptions." << endl;
	DemoSort();
	cout << endl << "Tasks 2.2.3.1-3 and tasks 2.2.4.1-4 - "
		<< "Working with objects through pointers." << endl;
	DemoRectangle();
	DemoFligth();
	DemoMovie();
	cout << endl << "Tasks 2.2.5.1-6 (2.2.5.4 demonstrated above in DemoRectangle())." << endl;
	DemoReadAndWriteRectangles();
	cout << endl << "Tasks 2.2.6.1-3." << endl;
	DemoDynamicFlight();
	DemoDynamicFlights();
	system("pause");
	cout << endl << "Tasks 2.2.7.1-3." << endl;
	DemoCircle();
	Movie* testMovie = MakeMovie("Test", 233, 2011, Horror, 4.5);
	Flight* testFlight = MakeFlight("Moscow", "Tegeran", 235);
	Time* testTime = MakeTime(12, 43, 33);
	Movie* copiedMovie = CopyMovie(testMovie);
	Flight* copiedFlight = CopyFlight(testFlight);
	Time* copiedTime = CopyTime(testTime);
	system("pause");
	cout << endl << "Task 2.2.8." << endl;
	DemoEnums();
	system("pause");
	cout << endl << "Task 2.2.9." << endl;
	DemoMovieWithGenre();
	system("pause");
	cout << endl << "Done. " << endl;
	//TODO: каждая переменная должна удаляться в своей строке, аналогично объявлению
	delete testMovie;
	delete testFlight;
	delete 	testTime;
	delete copiedMovie;
	delete copiedFlight;
	delete copiedTime;
}

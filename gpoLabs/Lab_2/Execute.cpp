#include "Execute.h"
#include <iostream>

using namespace std;

void Lab_2()
{
	cout << "Task 2.2.1.1 and 2.2.1.2 - Exceptions." << endl;
	DemoSort();
	cout << endl << "Tasks 2.2.3.1-3 and tasks 2.2.4.1-4 - "
		<< "Working with objects through pointers." << endl;
	cout << endl << "Tasks 2.2.5.1-6 (2.2.5.4 demonstrated above in DemoRectangle())." << endl;
	system("pause");
	cout << endl << "Tasks 2.2.7.1-3." << endl;
	DemoCircle();
	system("pause");
	cout << endl << "Task 2.2.8." << endl;
	DemoEnums();
	system("pause");
	cout << endl << "Task 2.2.9." << endl;
	system("pause");
	cout << endl << "Done. " << endl;
	//TODO: каждая переменная должна удаляться в своей строке, аналогично объявлению
}

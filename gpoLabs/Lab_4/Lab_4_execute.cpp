#include <iostream>
#include "Lab_4_execute.h"

using std::cout;
using std::cin;
using std::endl;

void Lab4()
{
	DemoRing();
}

void DemoRing()
{
	try 
	{
		Ring firstRing(1.4, 1.0, &Point(0.0, 0.0));
		cout << "First area: " << firstRing.GetArea() << endl;
	}
	catch (const std::exception &ex)
	{
		cout <<"Exception: " <<ex.what() << endl;
	}
		
	Ring secondRing(2.4, 2.5, &Point(2.0, -1.0));
	Ring thirdRing(3.1, 5.5, &Point(0.0, 5.0));

	cout << "Second area: " << secondRing.GetArea() << endl;
	cout << "Third area: " << thirdRing.GetArea() << endl;
	system("pause");
}

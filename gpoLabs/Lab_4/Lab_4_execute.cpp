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
		Ring firstRing(1.4, -1.0, &Point(0.0, 0.0));
		cout << "First area: " << firstRing.GetArea() << endl;
	}
	catch (const std::exception &ex)
	{
		cout <<"Exception: " <<ex.what() << endl;
	}

	cout << Ring::GetAllRingsCount() << endl;
	Ring secondRing(2.4, 2.5, &Point(2.0, -1.0));
	cout << Ring::GetAllRingsCount() << endl;
	Ring thirdRing(3.1, 5.5, &Point(0.0, 5.0));
	cout << Ring::GetAllRingsCount() << endl;

	cout << "Second area: " << secondRing.GetArea() << endl;
	cout << "Third area: " << thirdRing.GetArea() << endl;

	cout << "Ring counter before delete: " <<
		Ring::GetAllRingsCount() << endl;    
	Ring* ring = new Ring(5.0, 10.0, &Point(25.0, 25.0));  
	cout << "Ring counter after consturctor: " <<
		Ring::GetAllRingsCount() << endl;
	delete ring;
	cout << "Ring counter after delete: " << Ring::GetAllRingsCount() << endl;


	system("pause");
}

#include <iostream>
#include "Lab_4_execute.h"

using std::cout;
using std::cin;
using std::endl;

void Lab4()
{
	DemoRing();
	DemoCollision();
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

void DemoCollision()
{
	Rectangle firstRectangle(2, 4, &Point(0.0, 0.0));
	Rectangle secondRectangle(2, 2, &Point(2.0, 0.0));
	if (CollisionManager::IsCollision(firstRectangle, secondRectangle))
	{
		cout << "Collision!" << endl;
	}
	Rectangle thirdRectangle(2, 4, &Point(0.0, 0.0));
	Rectangle fourthRectangle(2, 2, &Point(100.0, -100.0));
	if (!CollisionManager::IsCollision(thirdRectangle, fourthRectangle))
	{
		cout << "NO Collision!" << endl;
	}
	Ring firstRing(2, 4, &Point(0.0, 0.0));
	Ring secondRing(2, 4, &Point(2.0, 2.0));
	if (CollisionManager::IsCollision(firstRing, secondRing))
	{
		cout << "Collision!" << endl;
	}
	Ring thirdRing(2, 4, &Point(0.0, 0.0));
	Ring fourthRing(2, 4, &Point(2.0, 100.0));
	if (!CollisionManager::IsCollision(thirdRing, fourthRing))
	{
		cout << "NO Collision!" << endl;
	}
	system("pause");
}

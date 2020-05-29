#include "GeometricProgram.h"
#include "Ring.h"
#include "../Lab_3/Rectangle.h"
#include "CollisionManager.h"
#include "DoubleValidator.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void GeometricProgram::DemoRing()
{
	try
	{
		Ring firstRing(1.4, -1.0, &Point(0.0, 0.0));
		cout << "First area: " << firstRing.GetArea() << endl;
	}
	catch (const std::exception& ex)
	{
		cout << "Exception: " << ex.what() << endl;
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

void GeometricProgram::DemoCollision()
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

void GeometricProgram::DemoRectangle()
{
	Rectangle* rectangles = new Rectangle[5];
	rectangles[0] = Rectangle(11.2, 21.6, &Point(-22.3, 1.3));
	rectangles[1] = Rectangle(11.6, 13.1, &Point(32.1, -33.3));
	rectangles[2] = Rectangle(5.8, 2.3, &Point(0.5, 0));
	rectangles[3] = Rectangle(10.1, 9.3, &Point(-32.5, 33.0));
	rectangles[4] = Rectangle(13.3, 4.8, &Point(0, 100.1));
	for (int i = 0; i < 5; i++)
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

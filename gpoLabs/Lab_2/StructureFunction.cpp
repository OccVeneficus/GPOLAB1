#include "StructureFunction.h"
#include <iostream>
#include <limits>

using namespace std;

/*2.2.5.1*/
void WriteRectangle(Rectangle& rectangle)
{
	cout << "Rectangle color " << rectangle.Color << ", size " <<
		rectangle.Length << 'x' << rectangle.Width << endl;
}

/*2.2.5.2*/
void ReadRectangle(Rectangle& rectangle)
{
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
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		cout << "Enter " << i + 1 << " rectangle" << endl;
		ReadRectangle(arrayRectangle[i]);
	}
	for (int i = 0; i < 5; i++)
	{
		cout << i + 1 << ": ";
		WriteRectangle(arrayRectangle[i]);
	}
	Rectangle *maxLengthRectangle = FindRectangle(arrayRectangle, 5);
	cout << "Rectangle with max length color " << maxLengthRectangle->Color <<
		", size " << maxLengthRectangle->Length << 'x' << maxLengthRectangle->Width
		<< endl;
	Rectangle* maxSquareRectangle = FindMaxRectangle(arrayRectangle, 5);
	cout << "Rectangle with max square color " << maxSquareRectangle->Color <<
		", size " << maxSquareRectangle->Length << 'x' << maxSquareRectangle->Width
		<< endl;
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
Rectangle* FindRectangle(Rectangle* rectangles, int count)
{
	Rectangle* maxLengthRectangle = &rectangles[0];
	for (int i = 0; i < count; i++)
	{
		if (rectangles[i].Length > maxLengthRectangle->Length)
		{
			maxLengthRectangle->Color = rectangles[i].Color;
			maxLengthRectangle->Length = rectangles[i].Length;
			maxLengthRectangle->Width = rectangles[i].Width;
		}
	}
	return maxLengthRectangle;
}

/*2.2.5.6*/
Rectangle* FindMaxRectangle(Rectangle* rectangles, int count)
{
	Rectangle *maxSquareRectangle = &rectangles[0];
	for (int i = 0; i < count; i++)
	{
		if ((rectangles[i].Length * rectangles[i].Width) > (maxSquareRectangle->Length
			* maxSquareRectangle->Width))
		{
			maxSquareRectangle = &rectangles[i];
		}
	}
	return maxSquareRectangle;
}


#include "Rectangle.h"

Rectangle* MakeRectangle(double length, double width, string color)
{
	Rectangle* rectangle = new Rectangle;
	rectangle->Length = length;
	rectangle->Width = width;
	rectangle->Color = color;
	return rectangle;
}

Rectangle* CopyRectangle(Rectangle* rectangle)
{
	Rectangle* copiedRectangle = new Rectangle;
	return copiedRectangle = MakeRectangle(rectangle->Length, rectangle->Width, rectangle->Color);
}
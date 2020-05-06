#pragma once
#include "Point.h"

class Rectangle // TODO:именование, пустые строки 
{
private:
	double _length;
	double _width;
	Point* _centre;

public:
	Rectangle();
	Rectangle(double length, double width, Point* centre);

	void SetLength(double length);
	void SetWidth(double width);
	void SetCentre(Point* centre);

	double Getlength();
	double GetWidth();
	Point* GetCentre();
};


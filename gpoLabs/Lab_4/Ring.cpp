#include "Ring.h"
#include <exception>

int Ring::AllRingsCount = 0;

void Ring::AssertOnPositiveValue(double value)
{
	if (value <= 0.0)
	{
		throw std::exception(" Radius cant be negative value. ");
	}
}

Ring::Ring(double innerRadius, double outerRadius, Point* centre)
{
	SetInnerOuterRadius(innerRadius, outerRadius);
	SetCentre(centre);
	AllRingsCount++;
}

Ring::~Ring()
{
	AllRingsCount--;
}

void Ring::SetInnerOuterRadius(double innerRadius, double outerRadius)
{
	DoubleValidator::AssertPositiveValue(innerRadius);
	DoubleValidator::AssertPositiveValue(outerRadius);
	if (innerRadius > outerRadius)
	{
		throw std::exception("Inner radius cant be bigger than outer and outer less than inner.");
	}
	this->_innerRadius = innerRadius;
	this->_outerRadius = outerRadius;
}

void Ring::SetCentre(Point* centre)
{
	this->_centre = centre;
}

double Ring::GetInnerRadius()
{
	return this->_innerRadius;
}

double Ring::GetOuterRadius()
{
	return this->_outerRadius;
}

Point* Ring::GetCentre()
{
	return this->_centre;
}

double Ring::GetArea()
{
	// TODO: для степени 2 лучше перемножать переменные напрямую, чем функция pow
	// TODO: для малых степеней она работает медленно
	double innerRingArea = M_PI * pow(this->_innerRadius, 2);
	double outerRingArea = M_PI * pow(this->_outerRadius, 2);
	
	return outerRingArea - innerRingArea;
}

int Ring::GetAllRingsCount()
{
	return AllRingsCount;
}

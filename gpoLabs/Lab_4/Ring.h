#pragma once
#include "../Lab_3/Point.h"
#include "DoubleValidator.h"
#define _USE_MATH_DEFINES
#include <cmath>

class Ring
{
private:
	static int AllRingsCount;

	double _innerRadius;
	double _outerRadius;
	Point* _centre;

	void AssertOnPositiveValue(double value);

public:
	Ring(double innerRadius, double outerRadius, Point* centre);
	~Ring();

	void SetInOutRadii(double innerRadius, double outerRadius);
	void SetCentre(Point* centre);

	double GetInnerRadius();
	double GetOuterRadius();
	Point* GetCentre();

	double GetArea();

	static int GetAllRingsCount();
};
#pragma once
#include "../Lab_3/Point.h"

class Ring
{
private:
	double _innerRadius;
	double _outerRadius;
	Point* _centre;

public:
	Ring(double innerRadius, double outerRadius, Point* centre);

	void SetInnerOuterRadius(double innerRadius, double outerRadius);
	void SetCentre(Point* centre);

	double GetInnerRadius();
	double GetOuterRadius();
	Point* GetCentre();
};
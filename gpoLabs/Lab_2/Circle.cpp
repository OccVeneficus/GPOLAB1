#include "Circle.h"

/*2.2.7.1*/
Circle* MakeCircle(double x, double y, double radius, string color)
{
	Circle* circle = new Circle;
	circle->X = x;
	circle->Y = y;
	circle->Radius = radius;
	circle->Color = color;
	return circle;
}

Circle* CopyCircle(Circle* circle)
{
	Circle* copiedCircle = new Circle;
	return copiedCircle = MakeCircle(circle->X, circle->Y, circle->Radius, circle->Color);
}

void DemoCircle()
{
	Circle* circle1 = MakeCircle(5.0, 7.0, 7.5, "Red");
	Circle* circle2 = MakeCircle(5.0, 7.0, 7.5, "Red");
	Circle* circle3 = MakeCircle(5.0, 7.0, 7.5, "Red");

	Circle* copyCircle1 = CopyCircle(circle1);
	Circle* copyCircle2 = CopyCircle(circle2);
	Circle* copyCircle3 = CopyCircle(circle3);
}
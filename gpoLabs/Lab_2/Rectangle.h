#pragma once
#include <string>

using namespace std;

struct Rectangle
{
	double Length;
	double Width;
	string Color;
};

Rectangle* MakeRectangle(double length, double width, string color);
Rectangle* CopyRectangle(Rectangle* rectangle);
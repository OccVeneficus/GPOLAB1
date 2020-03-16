#pragma once
#include "Rectangle.h"

/*2.2.5*/
void WriteRectangle(Rectangle& rectangle);
void ReadRectangle(Rectangle& rectangle);
void DemoReadAndWriteRectangles();
void Exchange(Rectangle& firstRectangle, Rectangle& secondRectangle);
Rectangle* FindRectangle(Rectangle* rectangles, int count);
void FindMaxRectangle(Rectangle* rectangles, int count);
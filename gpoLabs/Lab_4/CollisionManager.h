#pragma once
#include "Ring.h"
#include "../Lab_3/Rectangle.h"

static class CollisionManager
{
public:
	static bool IsCollision(Rectangle& first, Rectangle& second);
	static bool IsCollision(Ring& first, Ring& second);
};


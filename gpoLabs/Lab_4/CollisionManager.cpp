#include "CollisionManager.h"

bool CollisionManager::IsCollision(Rectangle& first, Rectangle& second)
{
	return ((abs(first.GetCentre()->GetX() - second.GetCentre()->GetX())) < 
		((first.GetWidth() + second.GetWidth())/2)) && 
		(abs(first.GetCentre()->GetY() - second.GetCentre()->GetY()) < 
			(first.Getlength() + second.Getlength())/2);
}

bool CollisionManager::IsCollision(Ring& first, Ring& second)
{
	return (sqrt(pow(abs(first.GetCentre()->GetX()-second.GetCentre()->GetX()),2)
		+pow(abs(first.GetCentre()->GetY() - second.GetCentre()->GetY()),2))) <
		(first.GetOuterRadius() + second.GetOuterRadius());
}

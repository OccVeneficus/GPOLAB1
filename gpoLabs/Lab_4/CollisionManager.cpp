#include "CollisionManager.h"

bool CollisionManager::IsCollision(Rectangle& first, Rectangle& second)
{
	// TODO: Выражение слишком большое - читаемость ужасная. Через месяц ты сам не сможешь проверить правильность формулы
	// TODO: добавить локальные переменные, в которые сохранить значения из геттеров,
	// TODO: затем в две булевы переменные сохранить значения каждой формулы слева и справа от логического перемножения
	// TODO: и только потом вернуть результат логического умножения двух булевых переменных
	return ((abs(first.GetCentre()->GetX() - second.GetCentre()->GetX())) < 
		((first.GetWidth() + second.GetWidth())/2)) && 
		(abs(first.GetCentre()->GetY() - second.GetCentre()->GetY()) < 
			(first.Getlength() + second.Getlength())/2);
}

bool CollisionManager::IsCollision(Ring& first, Ring& second)
{
	// TODO: то же самое, см. выше
	return (sqrt(pow(abs(first.GetCentre()->GetX()-second.GetCentre()->GetX()),2)
		+pow(abs(first.GetCentre()->GetY() - second.GetCentre()->GetY()),2))) <
		(first.GetOuterRadius() + second.GetOuterRadius());
}

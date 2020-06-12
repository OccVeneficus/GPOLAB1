#include "PercentDiscount.h"

void PercentDiscount::SetPercent(double percent)
{
	if (percent < 0.0 || percent > 100.0)
	{
		throw std::exception("Wrong percentage");
	}
	_percent = percent;
}

double PercentDiscount::GetPercent()
{
	return _percent;
}

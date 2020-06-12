#pragma once
#include "DiscountBase.h"

class PercentDiscount :	public DiscountBase
{
private:
	double _percent;

public:

	void SetPercent(double percent);
	double GetPercent();

	PercentDiscount(double percent, Category category) : DiscountBase(category)
	{
		SetPercent(percent);
	}

	double Calculcate(Product* product) override
	{
		if (product->GetCategory() == this->GetCategory())
		{
			return product->GetCost() * ((100.0 - _percent) / 100);
		}
		return product->GetCost();
	}
};


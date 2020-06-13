#pragma once
#include "DiscountBase.h"

class PercentDiscount :	public DiscountBase
{
private:
	double _percent;

public:

	void SetPercent(double percent);
	double GetPercent();
	// TODO: реализацию из заголовочного файла
	PercentDiscount(double percent, Category category);

	double Calculate(Product* product) override;
};


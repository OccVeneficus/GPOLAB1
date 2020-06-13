#pragma once
#include "DiscountBase.h"

class CertificateDiscount : public DiscountBase
{
private:
	double _amount;

public:

	void SetAmount(double amount);
	double GetAmount();
	CertificateDiscount(Category category, double amount) :
		DiscountBase(category)
	{
		SetAmount(amount);
	}
	// TODO: грамошибка
	// TODO: почему реализация в h-файле?
	double Calculcate(Product* product) override
	{
		if (product->GetCategory() == this->GetCategory())
		{
			double newCost = product->GetCost() - _amount;
			if (newCost <= 0.0)
			{
				_amount = _amount - product->GetCost();
				return 0.0;
			}
			else
			{
				_amount = 0.0;
				return newCost;
			}
		}
		return product->GetCost();
	}
};


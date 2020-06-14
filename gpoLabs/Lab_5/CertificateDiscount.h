#pragma once
#include "DiscountBase.h"

class CertificateDiscount : public DiscountBase
{
private:
	double _amount;

public:

	void SetAmount(double amount);
	double GetAmount();
	CertificateDiscount(Category category, double amount);
	double Calculate(Product* product) override;
};


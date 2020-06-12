#include "CertificateDiscount.h"

void CertificateDiscount::SetAmount(double amount)
{
	if (amount < 0 || amount > 10000)
	{
		throw std::exception("Wrong amount range");
	}
	_amount = amount;
}

double CertificateDiscount::GetAmount()
{
	return _amount;
}

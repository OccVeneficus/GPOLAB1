#include "DoubleValidator.h"
#include <exception>

bool DoubleValidator::IsValuePositive(double value)
{
	return (value >= 0.0);
}

bool DoubleValidator::IsValueInRange(double value, double min, double max)
{
	return (value >= min && value <= max);
}

void DoubleValidator::AssertPositiveValue(double value)
{
	if (!IsValuePositive(value))
	{
		throw std::exception("Value cant be negative.");
	}
}

void DoubleValidator::AssertValueInRange(double value, double min, double max)
{
	if (!IsValueInRange(value, min, max))
	{
		throw std::exception("Value cant be negative.");
	}
}

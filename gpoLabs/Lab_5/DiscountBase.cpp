#include "DiscountBase.h"

void DiscountBase::SetCategory(Category category)
{
	this->_category = category;
}

Category DiscountBase::GetCategory()
{
	return this->_category;
}

DiscountBase::DiscountBase(Category category)
{
	SetCategory(category);
}

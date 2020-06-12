#pragma once
#include "Category.h"
#include "Product.h"

class DiscountBase
{
private:
	Category _category;
	void SetCategory(Category category);

public:
	Category GetCategory();
	double virtual Calculcate(Product* product) = 0;

protected:
	DiscountBase(Category category);
};


#include "Product.h"

Product::Product(Category category, string name, double cost)
{
	SetCost(cost);
	SetCategory(category);
	SetName(name);
}

void Product::SetCategory(Category category)
{
	this->_category = category;
}

void Product::SetName(string name)
{
	this->_name = name;
}

void Product::SetCost(double cost)
{
	if (cost <= 0.0 || cost > 100000.0)
	{
		throw std::exception("Cost not in 0.0 - 100000.0 range");
	}
	this->_cost = cost;
}

Category Product::GetCategory()
{
	return this->_category;
}

string Product::GetName()
{
	return this->_name;
}

double Product::GetCost()
{
	return this->_cost;
}

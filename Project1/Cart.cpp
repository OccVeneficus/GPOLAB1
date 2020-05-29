#include "Cart.h"
#include <exception>

using std::exception;

Cart::Cart(Product* products, int productsCount)
{
	this->SetProducts(products, productsCount);
}

Product* Cart::GetProducts()
{
	return this->_products;
}

int Cart::GetProductsCount()
{
	return this->_productsCount;
}

void Cart::SetProducts(Product* products, int productsCount)
{
	if (productsCount < 0)
	{
		throw exception("Product Cost cant be less than 0.");
	}
	this->_products = products;
	this->_productsCount = productsCount;
}

double Cart::GetFullCost()
{
	double fullCost = 0;
	for (int i = 0; i < this->_productsCount; i++)
	{
		fullCost = fullCost + this->_products[i].GetCost();
	}
	return fullCost;
}

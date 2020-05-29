#include "ProductList.h"
#include <exception>

using std::exception;

ProductList::ProductList(Product* products, int productsCounter, string category)
{
	this->SetProducts(products, productsCounter);
	this->SetCategory(category);
}

void ProductList::SetProducts(Product* products, int productsCount)
{
	if (productsCount < 0)
	{
		throw exception("Products count cant be less than 0");
	}
	this->_products = products;
	this->_productsCount = productsCount;
}

void ProductList::SetCategory(string category)
{
	this->_category = category;
}

Product* ProductList::GetProducts()
{
	return this->_products;
}

int ProductList::GetProductsCount()
{
	return this->_productsCount;
}

string ProductList::GetCategory()
{
	return this->_category;
}

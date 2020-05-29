#pragma once
#include "Product.h"

class ProductList
{
private:
	Product* _products;
	int _productsCount;
	string _category;
public:
	ProductList(Product* products, int productsCounter, string category);

	void SetProducts(Product* products, int productsCount);
	void SetCategory(string category);

	Product* GetProducts();
	int GetProductsCount();
	string GetCategory();
};


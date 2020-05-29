#pragma once
#include "Product.h"

class Cart
{
private:
	Product* _products;
	int _productsCount;

public:
	Cart(Product* products, int productsCount);

	Product* GetProducts();
	int GetProductsCount();

	void SetProducts(Product* products, int productsCount);

	double GetFullCost();
};


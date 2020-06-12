#pragma once
#include <iostream>
#include "Category.h"

using namespace std;

class Product
{
private:
	Category _category;
	string _name;
	double _cost;

public:
	Product(Category category, string name, double  cost);

	void SetCategory(Category category);
	void SetName(string name);
	void SetCost(double cost);

	Category GetCategory();
	string GetName();
	double GetCost();
};


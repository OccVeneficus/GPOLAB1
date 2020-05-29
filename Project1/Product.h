#pragma once
#include <iostream>

using std::string;

class Product
{
private:
	string _name;
	string _description;
	double _cost;
public:
	Product(string name, string description, double cost);
	Product();

	string GetName();
	string GetDescription();
	double GetCost();

	void SetName(string name);
	void SetDescription(string description);
	void SetCost(double cost);
};


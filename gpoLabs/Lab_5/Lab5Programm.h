#pragma once
#include <iostream>
#include "Person.h"
#include "Student.h"
#include "Teacher.h"
#include "User.h"
#include "PaidUser.h"
#include "Post.h"
#include "Category.h"
#include "DiscountBase.h"
#include "CertificateDiscount.h"
#include "Product.h"
#include "PercentDiscount.h"

using namespace std;

class Lab5Programm
{
public:
	void ShowName(Person* person);
	void DemoInheritance();
	void DemoRefactoring();
	void DemoPolimorph();
	User* Login(User** users, int usersCount,
		string enteredLogin, string enteredPassword);
};


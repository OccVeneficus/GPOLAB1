#include "Lab5.h"

void ShowName(Person* person)
{
	cout << person->GetName() << " " << person->GetSurname() << " " <<
		person->GetPatronymic();
}

User* Login(User** users, int usersCount, string enteredLogin,
	string enteredPassword)
{
	for (int i = 0; i < usersCount; i++)
	{
		if (users[i]->GetLogin() == enteredLogin)
		{
			if (users[i]->IsCorrectPassword(enteredPassword))
			{
				return users[i];
			}
			else
			{
				throw exception("Uncorrect password");
			}
		}
	}
	return nullptr;
}

void DemoInheritance()
{
	Person person("Ivanov", "Ivan", "Ivanovich");
	ShowName(&person);
	cout << endl;
	Student student("Petrov", "Alex", "Pogchampovich", 105331554, 2017);
	ShowName(&student);
	cout << endl;
	Teacher teacher("Bagrotion", "Lidia", "Rudolfovna", "Docent");
	ShowName(&teacher);
	cout << endl;
}

void DemoRefactoring()
{
	User** users = new User * [8]
	{
		new User(100000, "morkovka1995", "1995morkovka"),
		new User(100001, "ilon_mask", "X ae A-12"),
		new User(100002, "megazver", "password"),
		new User(100003, "yogurt", "ksTPQzSu"),
		new PaidUser(200000, "TheKnyazz", "JHPzPGFG"),
		new PaidUser(200001, "system_exe", "UgfkDGmU"),
		new PaidUser(200002, "RazorQ", "TBgRnbCP"),
		new PaidUser(200003, "schdub", "CetyQVID")
	};

	string login = "megazver";
	string password = "password";
	User* loginedUser = Login(users, 8, login, password);

	cout << "Signed in as: " << loginedUser->GetLogin() << endl;

	login = "system_exe";
	password = "UgfkDGmU";
	loginedUser = Login(users, 8, login, password);

	cout << "Signed in as: " << loginedUser->GetLogin() << endl;

	try
	{
		User user1(1, "fd{dw}", "1234");
	}
	catch (const std::exception& ex)
	{
		cout << "Exception: " << ex.what() << endl;;
	}

	try
	{
		PaidUser user2(1, "fd#w", "1234");
	}
	catch (const std::exception& ex)
	{
		cout << "Exception: " << ex.what() << endl;
	}

	for (int i = 0; i < 8; i++)
	{
		delete users[i];
	}
	delete[] users;
}

void ShowCheckWithDiscount(DiscountBase* discount, Product** products,
	int productsCount)
{
	double totalCost = 0;
	for (int i = 0; i < productsCount; i++)
	{
		cout << endl << products[i]->GetName() << " " << "Old Cost: "
			<< products[i]->GetCost() << " New Cost: ";
		double newCost = discount->Calculcate(products[i]);
		cout << newCost;
		totalCost = totalCost + newCost;
	}
	cout << endl << "Total Cost with discount: " << totalCost;
}

void Lab5()
{
	DemoInheritance();
	system("pause");
	DemoRefactoring();
	system("pause");
	Product** products = new Product * [4]
	{
		new Product(TVSet, "Samsung SmartTV", 29999.99),
		new Product(Dishwasher, "LG-SupaClean3000", 9999.99),
		new Product(SSD, "ADATIA", 1400.0),
		new Product(Microwave, "Leran FMO-2032 W", 4499.9)
	};
	PercentDiscount percent(20.0,TVSet);
	CertificateDiscount certificate(SSD, 1500.0);
	cout << endl << "Check with 20% discount on TVSet: ";
	ShowCheckWithDiscount(&percent, products, 4);
	cout << endl << endl <<"Check with 1500 bonus sertificate for SSD:" << endl;
	ShowCheckWithDiscount(&certificate, products, 4);
	cout << endl;
	cout <<"Amount left on certificate: "<<certificate.GetAmount() << endl;
	system("pause");
	for (int i = 0; i < 4; i++)
	{
		delete products[i];
	}
	delete[] products;
}

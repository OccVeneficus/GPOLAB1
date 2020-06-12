#include "Lab5Programm.h"

void Lab5Programm::ShowName(Person* person)
{
	cout << person->GetName() << " " << person->GetSurname() << " " <<
		person->GetPatronymic();
}

void Lab5Programm::DemoInheritance()
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

void Lab5Programm::DemoRefactoring()
{
	User** users = new User * [8]
	{
		new User(100000, "morkovka1995", "1995morkovka"),
		new User(100001, "ilon_mask", "X æ A-12"),
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

User* Lab5Programm::Login(User** users, int usersCount,
	string enteredLogin, string enteredPassword)
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
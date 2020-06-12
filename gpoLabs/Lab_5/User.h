#pragma once
#include <iostream>

using namespace std;

class User
{
private:
	int _id;
	string _login;
	string _password;

	void SetId(int id);

public:
	User(int id, string login, string password);
	bool IsCorrectPassword(string password);

	void SetLogin(string login);
	void SetPassword(string password);

	int GetId();
	string GetLogin();
	string GetPassword();
};


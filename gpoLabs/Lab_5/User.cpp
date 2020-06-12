#include "User.h"
#include <exception>

void User::SetId(int id)
{
	_id = id;
}

void User::SetLogin(string login)
{
	if (login.find_first_of("{}<>@#$%^:*") != string::npos)
	{
		throw std::exception("Wrong symbols in login");
	}
	_login = login;
}

void User::SetPassword(string password)
{
	_password = password;
}

int User::GetId()
{ 
	return _id; 
}

string User::GetLogin() 
{
	return _login; 
}

string User::GetPassword() 
{ 
	return _password;
}

User::User(int id, string login, string password)
{
	SetId(id);
	SetLogin(login);
	SetPassword(password);
}

bool User::IsCorrectPassword(string password)
{
	return (password == _password);
}
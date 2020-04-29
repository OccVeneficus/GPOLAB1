#pragma once
#include <string>
#include <iostream>

using std::string;

class Book
{

private:
	 string _name;
	 short _year;
	 short _pages;
	 short _authorsCount;
	 string* _authors;

public:
	Book();
	Book(string name, short year, short pages, short
	authorsCount, string* authors);
	~Book();
	void SetName(string name);
	void SetYear(short year);
	void SetPages(short pages);
	void SetAuthors(string* authors, short authorsCount);
	short GetYear();
	short GetPages();
	short GetAutorsCount();
	string& GetName();
	string* GetAuthors();
	Book* FindBookByAuthor(string author);
};


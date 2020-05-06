#include "Book.h"

Book::Book()
{
	this->_authors = nullptr;
}

Book& Book::operator=(const Book& other)
{
	this->_authorsCount = other._authorsCount;
	if (this->_authors != nullptr)
	{
		delete[] this->_authors;
	}
	this->_authors = new string[other._authorsCount];
	for (int i = 0; i < other._authorsCount; i++)
	{
		this->_authors[i] = other._authors[i];
	}
	this->_year = other._year;
	this->_pages = other._pages;
	this->_name = other._name;
	return *this;
}

Book::Book(string name, short year, short pages, short
	authorsCount, string* authors)
{
	this->SetName(name);
	this->SetPages(pages);
	this->SetYear(year);
	this->SetAuthors(authors, authorsCount);
}

Book::~Book()
{
	delete[] this->_authors;
}

void Book::SetName(string name)
{
	this->_name = name;
}

void Book::SetYear(short year)
{
	this->_year = year;
}

void Book::SetPages(short pages)
{
	this->_pages = pages;
}

void Book::SetAuthors(string* authors, short authorsCount)
{
	delete[] this->_authors;
	this->_authorsCount = authorsCount;
	this->_authors = new string[authorsCount];
	for (int i = 0; i < authorsCount; i++)
	{
		this->_authors[i] = authors[i];
	}
}

short Book::GetYear()
{
	return this->_year;
}

short Book::GetPages()
{
	return this->_pages;
}
// TODO: именование
short Book::GetAutorsCount()
{
	return this->_authorsCount;
}

string& Book::GetName()
{
	return this->_name;
}

string* Book::GetAuthors()
{
	return this->_authors;
}

Book* Book::FindAuthor(string author)
{
	for (int i = 0; i < this->_authorsCount; i++)
	{
		if (this->_authors[i] == author)
		{
			return this;
		}
	}
	return nullptr;
}

#include "Book.h"

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



Book* Book::FindBookByAuthor(string author)
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

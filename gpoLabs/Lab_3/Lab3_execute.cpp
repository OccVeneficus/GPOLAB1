#include "Lab3_execute.h"

void Lab3()
{
	DemoBook();
}

void DemoBook()
{
	string name;
	short year;
	short authorsCount;
	short pages;
	string* authors;
	Book* books = new Book[3];
	for (int i = 0; i < 3; i++)
	{
		ReadBookFromConsole(name, year, pages, authorsCount, authors);
		Book newBook(name, year, pages, authorsCount, authors);
		books[i] = newBook;
	}
	for (int i = 0; i < 3; i++)
	{
		WriteBookInConsole(books[i]);
	}
	system("pause");
}

void WriteBookInConsole(Book& book)
{
	for (int i = 0; i < book.GetAutorsCount() - 1; i++)
	{
		cout << book.GetAuthors()[i] << ", ";
	}
	cout << book.GetAuthors()[book.GetAutorsCount() - 1] << " ";
	cout << book.GetName() << ". ";
	cout << book.GetYear() << ". ";
	cout << "- " << book.GetPages() << "p." << endl;
}

void ReadBookFromConsole(string& name, short& year, short& pages, short&
	authorsCount, string*& authors)
{
	cout << "Enter book name:";
	cin.clear();
	getline(cin, name);
	cout << endl << "Input book year(from 1 to 2020):";
	year = ReadValueInRange(1, 2020);
	cout << endl << "Input number of pages:";
	pages = ReadValueInRange(1, SHRT_MAX);
	cout << endl << "Input amount of book authors:";
	authorsCount = ReadValueInRange(1, 10);
	authors = new string[authorsCount];
	for (int i = 0; i < authorsCount; i++)
	{
		cin.clear();
		cout << "Enter author #" << i + 1 << ":";
		getline(cin, authors[i]);
		cout << endl;
	}
}

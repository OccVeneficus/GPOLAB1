#include "Lab3_execute.h"

void Lab3()
{
	DemoBook();
}

void DemoBook()
{
	Book book;
	ReadBookFromConsole(book);
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

void ReadBookFromConsole(Book& book)
{
	cout << "Enter book name:";
	string name;
	cin.clear();
	getline(cin, name);
	book.SetName(name);
	cout << endl << "Input book year(from 1 to 2020):";
	short year = ReadValueInRange(1, 2020);
	book.SetYear(year);
	cout << endl << "Input number of pages:";
	short pages = ReadValueInRange(1, SHRT_MAX);
	book.SetPages(pages);
	cout << endl << "Input amount of book authors:";
	short amountOfAuthors = ReadValueInRange(1, 10);
	string* authors = new string[amountOfAuthors];
	for (int i = 0; i < amountOfAuthors; i++)
	{
		cin.clear();
		cout << "Enter author #" << i + 1 << ":";
		getline(cin, authors[i]);
		cout << endl;
	}
	book.SetAuthors(authors, amountOfAuthors);
}

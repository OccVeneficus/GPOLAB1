#pragma once
#include <string>

using namespace std;
//TODO: Каждую структуру принято помещать в отдельный файл
struct Contact
{
	string Name;
	string Surname;
	string PhoneNumber;
};

struct Song
{
	string Album;
	string Name;
	int DurationSeconds;
};

struct Subject
{
	string Name;
	int StudyHours;
	string LecturerName;
	short int Mark;
};
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
	int SecondsDuration; //TODO: Единицы измерения лучше писать в конце - так реально удобнее пользоваться автодополнением
};

struct Subject
{
	string Name;
	int StudyHours;
	string LecturerName;
	short int Score; //TODO: Переименовать в Mark. Score - это очки в игре
};
#pragma once
#include "../Common/ConsoleOutput/ConsoleOutput.h"
#include <string>

using namespace std;

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
	int SecondsDuration;
};

struct Subject
{
	string Name;
	int StudyHours;
	string LecturerName;
	short int Score;
};
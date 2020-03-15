#pragma once
#include "../Common/ConsoleOutput/ConsoleOutput.h"
#include <string>

using namespace std;

/*2.2.2.1*/
struct Rectangle
{
	double Length;
	double Width;
	string Color;
};

struct Flight
{
	string Departure;
	string Arrival;
	int MinutesTimeOfFlight;
};

struct Movie
{
	string Name;
	int MinutesDuration;
	int Year;
	string Genre;
	double Rating;

};

/*2.2.2.2*/
struct Time
{
	int Hours;
	int Minutes;
	int Seconds;
};

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

/*2.2.1*/
void Sort(double* values, int count);
void DemoSort();

/*2.2.2*/
/*2.2.3*/
/*2.2.4*/
void DemoRectangle();
void DemoFligth();
void DemoMovie();
void WrongPointers();

/*2.2.5*/
void WriteRectangle(Rectangle& rectangle);
void ReadRectangle(Rectangle& rectangle);
void DemoReadAndWriteRectangles();
void Exchange(Rectangle& firstRectangle, Rectangle& secondRectangle);
void FindRectangle(Rectangle* rectangles, int count);
void FindMaxRectangle(Rectangle* rectangles, int count);

/*execute all tasks*/
void Lab_2();
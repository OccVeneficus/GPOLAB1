#include "Enums.h"
#include <iostream>

using namespace std;

/*2.2.8.3*/
void DemoEnums()
{
	Color color = Red;
	WeekDay weekDay = Sunday;
	Genre genre = Horror;
	StudyType studyType = FullTime;
	PhoneCompany company = Honor;
	Season season = Spring;

	/*2.2.8.4*/
	Color* colors = new Color[6];
	colors[0] = Red;
	colors[1] = Blue;
	colors[2] = LightBlue;
	colors[3] = Green;
	colors[4] = Red;
	colors[5] = Orange;

	WeekDay* weekDays = new WeekDay[6];
	weekDays[0] = Saturday;
	weekDays[1] = Monday;
	weekDays[2] = Wednesday;
	weekDays[3] = Thursday;
	weekDays[4] = Saturday;
	weekDays[5] = Friday;

	Genre* genres = new Genre[6];
	genres[0] = Horror;
	genres[1] = Action;
	genres[2] = Drama;
	genres[3] = Comedy;
	genres[4] = Comedy;
	genres[5] = BlockBuster;

	StudyType* studyTypes = new StudyType[6];
	studyTypes[0] = Evening;
	studyTypes[1] = FullTime;
	studyTypes[2] = FullTime;
	studyTypes[3] = Distance;
	studyTypes[4] = Remote;
	studyTypes[5] = Evening;

	PhoneCompany* companies = new PhoneCompany[6];
	companies[0] = Huawei;
	companies[1] = Apple;
	companies[2] = Samsung;
	companies[3] = Meizu;
	companies[4] = Honor;
	companies[5] = Huawei;

	Season* seasons = new Season[6];
	seasons[0] = Spring;
	seasons[1] = Autumn;
	seasons[2] = Autumn;
	seasons[3] = Winter;
	seasons[4] = Summer;
	seasons[5] = Spring;

	cout << "Red colors in array " << CountRed(colors, 6) << endl;
	cout << "Blue colors in array " << CountColor(colors, 6, Blue) << endl;

	delete[] colors;
	delete[] weekDays;
	delete[] genres;
	delete[] studyTypes;
	delete[] companies;
	delete[] seasons;
}

void WriteColor(Color color)
{
	switch (color)
	{
		case Red:
		{
			cout << "Red" << endl;
			break;
		}
		case Orange:
		{
			cout << "Orange" << endl;
			break;
		}
		case Yellow:
		{
			cout << "Yellow" << endl;
			break;
		}
		case Green:
		{
			cout << "Green" << endl;
			break;
		}
		case Blue:
		{
			cout << "Blue" << endl;
			break;
		}
		case LightBlue:
		{
			cout << "LightBlue" << endl;
			break;
		}
		case Purple:
		{
			cout << "Purple" << endl;
			break;
		}
	}
}

Color ReadColor()
{
	cout << "Input number from 0-6 (0 - red, 1 - orange, 2 - yellow, 3 - green, " <<
		"4 - blue, 5 - light blue, 6 - purple" << endl;
	int colorNumber;
	cin >> colorNumber;
	switch (colorNumber)
	{
		case 0:
		{
			return Red;
		}
		case 1:
		{
			return Orange;
		}
		case 2:
		{
			return Yellow;
		}
		case 3:
		{
			return Green;
		}
		case 4:
		{
			return Blue;
		}
		case 5:
		{
			return LightBlue;
		}
		case 6:
		{
			return Purple;
		}
	}
}

Genre ReadGenre()
{
	cout << "Input number from 0-5 (0 - Comedy, 1 - Drama, 2 - Thriller, 3 - Action, " <<
		"4 - Horror, 5 - Blockbuster" << endl;
	int genreNumber;
	cin >> genreNumber;
	switch (genreNumber)
	{
		case 0:
		{
			return Comedy;
		}
		case 1:
		{
			return Drama;
		}
		case 2:
		{
			return Thriller;
		}
		case 3:
		{
			return Action;
		}
		case 4:
		{
			return Horror;
		}
		case 5:
		{
			return BlockBuster;
		}
	}
}

void WriteGenre(Genre genre)
{
	switch (genre)
	{
		case Comedy:
		{
			cout << "Comedy";
			break;
		}
		case Drama:
		{
			cout << "Drama";
			break;
		}
		case Thriller:
		{
			cout << "Thriller";
			break;
		}
		case Action:
		{
			cout << "Action";
			break;
		}
		case Horror:
		{
			cout << "Horror";
			break;
		}
		case BlockBuster:
		{
			cout << "BlockBuster";
			break;
		}
	}
}

int CountRed(Color* color, int count)
{
	int redCounter = 0;
	for (int i = 0; i < count; i++)
	{
		if (color[i] == Red)
		{
			redCounter++;
		}
	}
	return redCounter;
}

int CountColor(Color* color, int count, Color findedColor)
{
	int colorCounter = 0;
	for (int i = 0; i < count; i++)
	{
		if (color[i] == findedColor)
		{
			colorCounter++;
		}
	}
	return colorCounter;
}
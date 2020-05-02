#include "sGenre.h"
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void WriteSongGenreToConsole(sGenre genre)
{
	switch (genre)
	{
		case 0:
		{
			cout << "Rock";
			break;
		}
		case 1:
		{
			cout << "Pop";
			break;
		}
		case 2:
		{
			cout << "EDM";
			break;
		}
		case 3:
		{
			cout << "Techno";
			break;
		}
		case 4:
		{
			cout << "Country";
			break;
		}
	}
}
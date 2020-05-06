#include "Common/ConsoleOutput/ConsoleOutput.h"
#include "Common/InputChecking/IntegerReading.h"
#include "Common/Consts/Consts.h"
#include "Lab_3/Lab3_execute.h"
using namespace std;

int main()
{
	int menuItem;
	do
	{
		system("cls");
		PrintMainMenuText();
		GetMenuItem(menuItem, 0, 6);
		switch (menuItem)
		{
			case 1:
			{
				Lab1();
				break;
			}
			case 2:
			{
				Lab2();
				break;
			}
			case 3:
			{
				Lab3();
				break;
			}
			case 4:
			{
				break;
			}
			case 5:
			{
				break;
			}
			case 6:
			{
				break;
			}
		}
	} 
	while (menuItem != DEFAULT_EXIT_MENU_ITEM);
	return 0;
}

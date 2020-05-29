#include "Common/ConsoleOutput/ConsoleOutput.h"
#include "Common/InputChecking/IntegerReading.h"
#include "Common/Consts/Consts.h"
#include "Lab_3/Lab3_execute.h"
#include "Lab_4/Lab_4_execute.h"
#include "Lab_4/GeometricProgram.h"

using namespace std;

int main()
{
	GeometricProgram lab4;
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
				Lab4();
				GeometricProgrammMenu(&lab4);
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

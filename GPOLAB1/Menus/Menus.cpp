#include "Menus.h"
#include "../Common/ConsoleOutput/ConsoleOutput.h"
#include "../Common/InputChecking/IntegerReading.h"
#include "../Common/Consts/Consts.h"
#include "../Lab_1/Tasks/Header/FirstLabTasks.h"
#include "../Lab_2/Header/SecondLabTasks.h"

void ChooseTaskFirstLab()
{
	int menuItem;
	do
	{
		system("pause");
		system("cls");
		PrintFirstLabMenuText();
		GetMenuItem(menuItem, 0, 25);
		switch (menuItem)
		{
			case 1:
			{
				Task_1_1_1_1();
				break;
			}
			case 2:
			{
				Task_1_1_1_2();
				break;
			}
			case 3:
			{
				Task_1_1_2_1();
				break;
			}
			case 4:
			{
				Task_1_1_2_3();
				break;
			}
			case 5:
			{
				Task_1_1_3_1();
				break;
			}
			case 6:
			{

				break;
			}
			case 7:
			{
				Task_1_1_3_2();
				break;
			}
			case 8:
			{
				Task_1_1_3_3();
				break;
			}
			case 9:
			{
				Task_1_1_3_4();
				break;
			}
			case 10:
			{
				Task_1_1_4_1();
				break;
			}
			case 11:
			{
				Task_1_1_4_2();
				break;
			}
			case 12:
			{
				Task_1_1_4_3();
				break;
			}
			case 13:
			{
				Task_1_1_4_4();
				break;
			}
			case 14:
			{
				Task_1_1_4_5();
				break;
			}
			case 15:
			{
				Task_1_1_4_6();
				break;
			}
			case 16:
			{
				Task_1_1_4_7();
				break;
			}
			case 17:
			{
				Task_1_1_4_8();
				break;
			}
			case 18:
			{
				Task_1_1_5_1();
				break;
			}
			case 19:
			{
				Task_1_1_5_2();
				break;
			}
			case 20:
			{
				Task_1_1_5_3();
				break;
			}
			case 21:
			{
				Task_1_1_5_4();
				break;
			}
			case 22:
			{
				Task_1_1_5_5();
				break;
			}
			case 23:
			{
				Task_1_1_5_6();
				break;
			}
			case 24:
			{
				Task_1_1_5_7();
				break;
			}
			case 25:
			{
				Task_1_1_5_8();
				break;
			}
		}
	} 
	while (menuItem != DEFAULT_EXIT_MENU_ITEM);
}

void ExecuteSecondLabTasks()
{
	
}

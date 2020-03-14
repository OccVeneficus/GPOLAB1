#include "../GPOLAB1/Common/ConsoleOutput/ConsoleOutput.h"
#include "../GPOLAB1/Common/InputChecking/IntegerReading.h"
#include "../GPOLAB1/Common/Consts/Consts.h"
#include "../GPOLAB1/Menus/Menus.h"

using namespace std;

int main()
{
	int menuItem;
	do
	{
		system("pause");
		system("cls");
		PrintMainMenuText();
		GetMenuItem(menuItem, 0, 6);
		switch (menuItem)
		{
			case 1:
			{
				ChooseTaskFirstLab();
				break;
			}
			case 2:
			{
				ExecuteSecondLabTasks();
				break;
			}
			case 3:
			{
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

//TODO: ����� ����������� �� ����� ���� � ����� �������� � GPOLAB1?
//TODO: ������ ���������� GPOLAB1, �� ������ �� ���� Lab2 - ������������ ���������� �������
#include "Common/ConsoleOutput/ConsoleOutput.h"
#include "Common/InputChecking/IntegerReading.h"
#include "Common/Consts/Consts.h"

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

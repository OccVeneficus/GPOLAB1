#include "ConsoleOutput.h"
#include "../../Lab_1/Tasks/FirstLabTasks.h"
#include "../InputChecking/IntegerReading.h"
#include "../Consts/Consts.h"
#include "../../Lab_2/Execute.h"

using namespace std;

void PrintMainMenuText()
{
	cout << endl;
	cout << " ______________________________________________________________\n";
	cout << "|                       ||||||GPO LABS||||||                  |\n";
	cout << "| Choose Lab from list below                                  |\n";
	cout << "| 1. Lab 1                                                    |\n";
	cout << "| 2. Lab 2                                                    |\n";
	cout << "| 3. Lab 3                                                    |\n";
	cout << "| 4. Lab 4                                                    |\n";
	cout << "| 5. Lab 5                                                    |\n";
	cout << "| 6. Lab 6                                                    |\n";
	cout << "| 0. Quit program                                             |\n";
	cout << "|_____________________________________________________________|\n";
}

void PrintFirstLabMenuText()
{
	cout << endl;
	cout << " ______________________________________________________________\n";
	cout << "|                       ||||||FIRST LAB||||||                 |\n";
	cout << "| Choose Task from list below                                 |\n";
	cout << "| 1. Task 1.1.1.1                                             |\n";
	cout << "| 2. Task 1.1.1.2                                             |\n";
	cout << "| 3. Task 1.1.2.1                                             |\n";
	cout << "| 4. Task 1.1.2.2                                             |\n";
	cout << "| 5. Task 1.1.2.3                                             |\n";
	cout << "| 6. Task 1.1.3.1                                             |\n";
	cout << "| 7. Task 1.1.3.2                                             |\n";
	cout << "| 8. Task 1.1.3.3                                             |\n";
	cout << "| 9. Task 1.1.3.4                                             |\n";
	cout << "| 10. Task 1.1.4.1                                            |\n";
	cout << "| 11. Task 1.1.4.2                                            |\n";
	cout << "| 12. Task 1.1.4.3                                            |\n";
	cout << "| 13. Task 1.1.4.4                                            |\n";
	cout << "| 14. Task 1.1.4.5                                            |\n";
	cout << "| 15. Task 1.1.4.6                                            |\n";
	cout << "| 16. Task 1.1.4.7                                            |\n";
	cout << "| 17. Task 1.1.4.8                                            |\n";
	cout << "| 18. Task 1.1.5.1                                            |\n";
	cout << "| 19. Task 1.1.5.2                                            |\n";
	cout << "| 20. Task 1.1.5.3                                            |\n";
	cout << "| 21. Task 1.1.5.4                                            |\n";
	cout << "| 22. Task 1.1.5.5                                            |\n";
	cout << "| 23. Task 1.1.5.6                                            |\n";
	cout << "| 24. Task 1.1.5.7                                            |\n";
	cout << "| 25. Task 1.1.5.8                                            |\n";
	cout << "| 0. Quit program                                             |\n";
	cout << "|_____________________________________________________________|\n";
}

void PrintSecondLabMenuText()
{
	cout << endl;
	cout << " ______________________________________________________________\n";
	cout << "|                       ||||||SECOND LAB||||||                |\n";
	cout << "| Choose Task from list below                                 |\n";
	cout << "| 1. Task 2.2.1.1                                             |\n";
	cout << "| 0. Quit program                                             |\n";
	cout << "|_____________________________________________________________|\n";
}

void Lab1()
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
	} while (menuItem != DEFAULT_EXIT_MENU_ITEM);
}

void Lab2()
{
	Lab_2();
}

void GeometricProgrammText()
{
	cout << " ______________________________________________________________\n";
	cout << "|                       GEOMETRIC PROGRAMM                    |\n";
	cout << "| Choose Demonstration function from list below               |\n";
	cout << "| 1. Rectangle                                                |\n";
	cout << "| 2. Ring                                                     |\n";
	cout << "| 3. Collision                                                |\n";
	cout << "| 0. Quit program                                             |\n";
	cout << "|_____________________________________________________________|\n";
}

void GeometricProgrammMenu(GeometricProgram* geometricProgram)
{
	int menuItem;
	do 
	{
		system("pause");
		system("cls");
		GeometricProgrammText();
		GetMenuItem(menuItem, 0, 3);
		switch (menuItem)
		{
			case 1:
			{
				geometricProgram->DemoRectangle();
				break;
			}
			case 2:
			{
				geometricProgram->DemoRing();
				break;
			}
			case 3:
			{
				geometricProgram->DemoCollision();
				break;
			}
		}
	} 
	while (menuItem != DEFAULT_EXIT_MENU_ITEM);
}

void Lab5ProgrammText()
{
	cout << " ______________________________________________________________\n";
	cout << "|                              LAB 5                          |\n";
	cout << "| Choose Demonstration function from list below               |\n";
	cout << "| 1. Inheritance                                              |\n";
	cout << "| 2. Ring                                                     |\n";
	cout << "| 3. Collision                                                |\n";
	cout << "| 0. Quit program                                             |\n";
	cout << "|_____________________________________________________________|\n";
}

void Lab5ProgrammMenu(Lab5Programm* lab5Programm)
{
	int menuItem;
	do
	{
		system("pause");
		system("cls");
		Lab5ProgrammText();
		GetMenuItem(menuItem, 0, 3);
		switch (menuItem)
		{
			case 1:
			{
				lab5Programm->DemoInheritance();
				break;
			}
			case 2:
			{

				break;
			}
			case 3:
			{

				break;
			}
		}
	} while (menuItem != DEFAULT_EXIT_MENU_ITEM);
}

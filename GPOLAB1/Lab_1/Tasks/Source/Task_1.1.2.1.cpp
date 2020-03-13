#include <iostream>
#include "../Header/FirstLabTasks.h"

using namespace std;

void Task_1_1_2_1()
{
    int userArray[10] = { 12, 21, 119, -80, 300, 75, 213, 3123, -123, 0 };
    cout << "Source array is:" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << ' ' << userArray[i];
    }

    int temporaryElement = 0;
    for (int i = 0; i < 10; i++) 
    { 
        for (int j = (10 - 1); j >= (i + 1); j--) 
        { 
            if (userArray[j] < userArray[j - 1]) 
            { 
                temporaryElement = userArray[j];
                userArray[j] = userArray[j - 1];
                userArray[j - 1] = temporaryElement;
            }
        }
    }
    cout << "\nSorted array is:" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << ' ' << userArray[i];
    }
}

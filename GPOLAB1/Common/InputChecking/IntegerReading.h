#pragma once
#include <sstream>
#include <string>
#include <iostream>

using namespace std;

bool CheckForInteger(string value);
int ReadValue();
/*bottomIndex must to be less than topIndex*/
void GetMenuItem(int& menuItem, int bottomIndex, int topIndex);
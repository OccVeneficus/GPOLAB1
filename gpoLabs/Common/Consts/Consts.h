#pragma once
#include <ctime>

time_t t = time(nullptr);
tm* timePtr = localtime(&t);

const int DEFAULT_EXIT_MENU_ITEM = 0;
const int MAX_DATE = 30;
const int MAX_HOUR = 24;
const int MAX_MINUTES = 60;
const int MAX_MONTH = 12;
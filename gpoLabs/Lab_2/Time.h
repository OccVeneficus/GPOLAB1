#pragma once //TODO: пустая строка от директив - ЛЮБЫЕ логические блоки отделяются одной пустой строкой

struct Time
{
	int Hours;
	int Minutes;
	int Seconds;
};

Time* MakeTime(int hours, int minutes, int seconds);
Time* CopyTime(Time* time);
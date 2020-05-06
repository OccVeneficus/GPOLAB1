#pragma once
#include "Song.h"
// TODO: что за венгерка? Переименовать класс правильно. Если конфликтует с именами с предыдущей лабы, то их можно удалить
class Album
{
private:
	string _name;
	int _year;
	Song* _song;
	int _songCount;

public:
	Album(string name, int year, Song* song, int songCount);
	Album();

	void SetName(string name);
	void SetYear(int year);
	void SetSong(Song* song, int songCounter);

	string GetName();
	// TODO:ошибка в именовании
	int GetYear();
	Song* GetSong();
	int GetSongCounter();

	Song* FindSong(string songName);

	~Album();
};


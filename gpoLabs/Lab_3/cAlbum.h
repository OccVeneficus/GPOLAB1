#pragma once
#include "cSong.h"
// TODO: что за венгерка? Переименовать класс правильно. Если конфликтует с именами с предыдущей лабы, то их можно удалить
class cAlbum
{
private:
	string _name;
	int _year;
	cSong* _song;
	int _songCount;

public:
	cAlbum(string name, int year, cSong* song, int songCount);
	cAlbum();

	void SetName(string name);
	void SetYear(int year);
	void SetSong(cSong* song, int songCounter);

	string GetName();
	// TODO:ошибка в именовании
	int GetYeat();
	cSong* GetSong();
	int GetSongCounter();

	cSong* FindSong(string songName);

	~cAlbum();
};


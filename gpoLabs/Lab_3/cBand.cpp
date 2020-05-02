#include "cBand.h"

cBand::cBand(string name, string description, cAlbum* album, int albumCount)
{
	SetName(name);
	SetDescription(description);
	SetAlbum(album, albumCount);
}

void cBand::SetName(string name)
{
	this->_name = name;
}

void cBand::SetDescription(string description)
{
	this->_description = description;
}

void cBand::SetAlbum(cAlbum* album, int albumCount)
{
	delete[] this->_album;
	this->_album = new cAlbum[albumCount];
	for (int i = 0; i < albumCount; i++)
	{
		this->_album[i] = album[i];
	}
	this->_albumCount = albumCount;
}

string cBand::GetName()
{
	return this->_name;
}

string cBand::GetDescription()
{
	return this->_description;
}

cAlbum* cBand::GetAlbum()
{
	return this->_album;
}

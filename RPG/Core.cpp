#include "Core.h"
#include <iostream>


std::string Core::GetGameName(Game* game) {
	return game->gameName;
}

Core::Core(int uid, std::string _country, std::string coreName, int version)
{
	supergame = new Game("Main game");
	this->country = _country;
	this->uid = uid;
	this->coreName = coreName;
	this->version = version;

}

Core::~Core()
{
}

int Core::GetPlayerCount()
{
	return playercount;
}

void Core::AddGame(Game* game, std::string gameName)
{
	  game = new Game(gameName);
}

void Core::SetCoreName(std::string name)
{
	this->coreName = name;
}

std::string Core::GetCoreName()
{
	return coreName;
}

void Core::SetUID(int uid)
{
	this->uid = uid;
}

int Core::GetUID()
{
	return uid;
}

void Core::SetCountry(std::string countryName)
{
	this->country = countryName;
}

std::string Core::GetCountryName()
{
	return country;
}

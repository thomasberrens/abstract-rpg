#include "Core.h"


std::string Core::GetGameName(Game* game) {
	return game->gameName;
}

void Core::SetActive(bool active)
{
	if (active) isRunning = true;
	if (!active) isRunning = false;
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
		
	return level.players.size() + 1; // +1 omdat die begint met tellen bij 0
}

void Core::AddGame(Game* game)
{
	games.push_back(game);
}

void Core::RemoveGame(Game* game)
{
	games.erase(std::remove(games.begin(), games.end(), game), games.end());
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

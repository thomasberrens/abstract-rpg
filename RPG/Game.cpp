#include "Game.h"

Game::Game(std::string name)
{
	//level = new Level("Lostvayne");
	this->gameName = name;
}

Game::~Game()
{
}

void Game::SetGameName(std::string gameName)
{
	this->gameName = gameName;
}

std::string Game::GetGameName()
{
	return gameName;
}

void Game::AddLevel(Level* level)
{
	levels.push_back(level);
}

Level* Game::GetLevel()
{

	return level;
}

void Game::DeleteLevel(Level* level)
{
	levels.erase(std::remove(levels.begin(), levels.end(), level), levels.end());
}

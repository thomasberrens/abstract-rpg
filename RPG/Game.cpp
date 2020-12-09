#include "Game.h"

Game::Game(std::string name)
{
	
	this->gameName = name;
}

Game::~Game()
{
}

void Game::SetGameName(std::string gameName)
{
	this->gameName = gameName;
}

std::string Game::GetGameName(Game game)
{
	return game.gameName;
}

void Game::AddLevel(Level* level, std::string levelName)
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

#include "Game.h"

Game::Game(std::string name)
{
	superLevel = new Level("SuperLevel");
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
	level = new Level(levelName);
}

Level Game::GetLevel(Level level)
{
	return level;
}

void Game::DeleteLevel(Level* level)
{
	level->~Level();
}

#pragma once
#include <iostream>
#include "Level.h"
class Game
{
public:
     Game(std::string name);
	~Game();

	std::vector<Level*> levels;

	void SetGameName(std::string gameName);
	std::string GetGameName(Game game);
	void AddLevel(Level* level, std::string levelName);
	Level* GetLevel();
	void DeleteLevel(Level* level);

	std::string gameName;
	std::string levelName;

	Level* level;

};


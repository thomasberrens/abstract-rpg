#pragma once
#include <iostream>
#include "Level.h"
#include <algorithm>
class Game
{
public:
     Game(std::string name);
	~Game();

	std::vector<Level*> levels;

	void SetGameName(std::string gameName);
	std::string GetGameName();
	void AddLevel(Level* level);
	Level* GetLevel();
	void DeleteLevel(Level* level);

	std::string gameName;
	std::string levelName;

	Level* level;

};


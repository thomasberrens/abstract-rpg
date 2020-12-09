#pragma once
#include <iostream>
#include "Level.h"
class Game
{
public:
     Game(std::string name);
	~Game();

	void SetGameName(std::string gameName);
	std::string GetGameName(Game game);
	void AddLevel(Level* level, std::string levelName);
	Level GetLevel(Level level);
	void DeleteLevel(Level* level);

	std::string gameName;
	std::string levelName;

	Level* superLevel;

	


};


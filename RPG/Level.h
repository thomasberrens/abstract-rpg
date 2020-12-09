#pragma once
#include <iostream>
#include "Player.h"
class Level
{
public:
	Level(std::string name);
	~Level();

	Player GetPlayer(Player player);
	void AddPlayer(Player* player, std::string playerName);
	void DeletePlayer(Player* player);
	std::string GetLevelName();
	void SetLevelName(std::string levelName);

	std::string levelName;
	Player* player;
};


#pragma once
#include <iostream>
#include "Player.h"
#include <vector>
class Level
{
public:
	Level(std::string name);
	~Level();

	std::vector<Player*> players;

    int playersize();

	Player* GetPlayer();
	void AddPlayer(Player* aPlayer);
	void DeletePlayer(Player* aPlayer);
	std::string GetLevelName();
	void SetLevelName(std::string levelName);

	std::string levelName;
	Player* player;
};


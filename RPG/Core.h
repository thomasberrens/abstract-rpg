#pragma once
#include <iostream>
#include "Game.h"
#include "Level.h"

class Core
{
public:
	Core(int uid, std::string country, std::string coreName, int version);

	~Core();

	std::vector<Game*> games;

	int GetPlayerCount();
	
	void AddGame(Game* game);
	void RemoveGame(Game* game);

	void SetCoreName(std::string name);
	std::string GetCoreName();

	void SetUID(int uid);
	int GetUID();

	void SetCountry(std::string country);
	std::string GetCountryName();
	
	std::string GetGameName(Game* game);

	void SetActive(bool active);

	std::string coreName;
	int uid;
	std::string country;
	float version;

	bool isRunning;

	Game* supergame;
	Level level;

};
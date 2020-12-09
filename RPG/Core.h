#pragma once
#include <iostream>
#include "Game.h"
class Core
{
public:
	Core(int uid, std::string country, std::string coreName, int version);

	~Core();

	int GetPlayerCount();

	void AddGame(Game* game, std::string gameName);

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

	int playercount;

	bool isRunning;

	Game* supergame;

};
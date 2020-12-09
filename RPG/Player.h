#include <iostream>
#pragma once
class Player
{
public:
	Player(std::string name);
	~Player();

	void SetPlayerName(Player player, std::string playerName);
	std::string GetPlayerName();
	float GetAverageScore();
	void SetAverageScore(float score);
	int GetPlayerAge();
	void SetPlayerAge(int age);

	std::string playerName;
	int playerAge;
	float averageScore;
	int PlayerCount;
		
};


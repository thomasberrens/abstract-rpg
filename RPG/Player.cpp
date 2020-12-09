#include "Player.h"
#include <iostream>


Player::Player(std::string name)
{
}

Player::~Player()
{
}

void Player::SetPlayerName(Player player, std::string playerName)
{
	player.playerName = playerName;
}

std::string Player::GetPlayerName()
{
	return playerName;
}

float Player::GetAverageScore()
{
	return averageScore;
}

void Player::SetAverageScore(float score)
{
	this->averageScore = score;
}

int Player::GetPlayerAge()
{
	return playerAge;
}

void Player::SetPlayerAge(int age)
{
	this->playerAge = age;
}

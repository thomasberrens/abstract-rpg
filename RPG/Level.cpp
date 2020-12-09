#include "Level.h"

Level::Level(std::string name)
{
    player = new Player("SuperPlayer");
}

Level::~Level()
{
  
}

Player Level::GetPlayer(Player player)
{
    return player;
}

void Level::AddPlayer(Player* player, std::string playerName)
{
    player = new Player(playerName);
    
}

void Level::DeletePlayer(Player* player)
{
    player->~Player();
}

std::string Level::GetLevelName()
{
    return levelName;
}

void Level::SetLevelName(std::string levelName)
{
    this->levelName = levelName;
}

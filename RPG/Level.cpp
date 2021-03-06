#include "Level.h"

Level::Level(std::string name)
{
    
    this->levelName = name;
}

Level::~Level()
{
  
}

Player* Level::GetPlayer()
{
    return player;
}

void Level::AddPlayer(Player* aPlayer)
{
    players.push_back(aPlayer);
    
}

void Level::DeletePlayer(Player* aPlayer)
{
   
    players.erase(std::remove(players.begin(), players.end(), aPlayer), players.end());
    
}

std::string Level::GetLevelName()
{
    return levelName;
}

void Level::SetLevelName(std::string levelName)
{
    this->levelName = levelName;
}

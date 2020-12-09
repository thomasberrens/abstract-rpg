#include "program.h"
#include "Core.h"

Core core(1, "Netherlands", "Maincore", 1);

void proofPlayer() {
	Player* player;

	player = new Player("Player1");

	
	core.level->AddPlayer(player);
	std::cout << "Added player!" << std::endl;

	std::cout << "Playercount: " << core.GetPlayerCount() << std::endl;

	core.level->DeletePlayer(player);
	std::cout << "Deleted player!" << std::endl;

	std::cout << "Playercount: " << core.GetPlayerCount() << std::endl;

	std::cout << std::endl;
}

void proofCore() {

	core.SetActive(true);

	std::cout << "Core name: " << core.GetCoreName() << std::endl;
	std::cout << "Country name: " << core.GetCountryName() << std::endl;
	std::cout << "Core UID: " << core.GetUID() << std::endl;

	core.SetCoreName("newNameCore");
	core.SetCountry("New-Netherlands");
	core.SetUID(3);

	std::cout << "New Core name: " << core.GetCoreName() << std::endl;
	std::cout << "New Country name: " << core.GetCountryName() << std::endl;
	std::cout << "New Core UID: " << core.GetUID() << std::endl;

	std::cout << std::endl;

}

void proofGame() {
	Game game("Lostvayne");

	Level* level = new Level("Britannia");
	game.level = level;

	game.AddLevel(level);
	std::cout << "Level added!" << std::endl;

	std::cout << "Get level: " << game.GetLevel() << std::endl;

	game.DeleteLevel(level);
	std::cout << "Level deleted!" << std::endl;

	std::cout << "Gamename: " << game.GetGameName() << std::endl;

	game.SetGameName("Big lostvayne");

	std::cout << "New gamename: " << game.GetGameName() << std::endl;

	std::cout << std::endl;
}

void proofLevel() {
	Level* level = new Level("Small britannia");
	Player* player;
	player = new Player("Meliodas");

	level->player = player;

	level->AddPlayer(player);
	std::cout << "Player added!" << std::endl;

	std::cout << "Level Player: " << level->GetPlayer() << std::endl;

	level->DeletePlayer(player);
	std::cout << "Level deleted!" << std::endl;

	std::cout << "Level name: " << level->GetLevelName() << std::endl;

	level->SetLevelName("Big Britannia");
	std::cout << "New Level name: " << level->GetLevelName() << std::endl;

	std::cout << std::endl;


}

int main() {
	

	proofCore();
	proofPlayer();
	proofGame();
	proofLevel();
	/*while (core.isRunning)
	{
	//	std::cout << "Core up and running!" << std::endl;

	} */
}
	


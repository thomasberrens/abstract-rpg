#include "program.h"
#include "Core.h"

int main() {
	Core core(1, "Netherlands", "Maincore", 1);
	
	core.SetActive(true);
	
	std::cout << core.GetCoreName() << std::endl;
	std::cout << core.GetCountryName() << std::endl;
	std::cout << core.GetUID() << std::endl;

	core.SetCoreName("newNameCore");
	core.SetCountry("New-Netherlands");
	core.SetUID(3);

	std::cout << core.GetCoreName() << std::endl;
	std::cout << core.GetCountryName() << std::endl;
	std::cout << core.GetUID() << std::endl;

	Player* player;

	player = new Player("PlayerHF");

	core.level->AddPlayer(player);

	std::cout << core.GetPlayerCount() << std::endl;

	core.level->DeletePlayer(player);

	std::cout << core.GetPlayerCount() << std::endl;

	while (core.isRunning)
	{
	//	std::cout << "Core up and running!" << std::endl;
		
	}

	
}
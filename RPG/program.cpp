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

	while (core.isRunning)
	{
	//	std::cout << "Core up and running!" << std::endl;
		
	}

	
}
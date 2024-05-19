#include "Zombie.hpp"

int main()
{
	Zombie *zom = newZombie("Caca");
	if (!zom)
	{
		std::cout << "Allocation n'a pas fonctionne\n";
		return (1);
	}
	Zombie bie("Feur");

	zom->announce();
	delete zom;
	randomChump("saloute");
}

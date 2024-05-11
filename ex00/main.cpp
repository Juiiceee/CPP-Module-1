#include "Zombie.hpp"

int main()
{
	Zombie *zom = newZombie("Caca");;
	Zombie bie("Feur");

	zom->announce();
	delete zom;
	randomChump("saloute");
}

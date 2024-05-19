#include "Zombie.hpp"
#include <iostream>

int main()
{
	int N = 100;
	Zombie *zombie = zombieHorde(N, "Feur");
	if (!zombie)
	{
		std::cout << "Nombre rentre inferieur a 1\n";
		return (1);
	}
	for (int i = 0; i < N; i++)
		zombie[i].announce();
	delete[] zombie;
	return (0);
}

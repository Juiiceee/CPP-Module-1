#include "Zombie.hpp"

int main()
{
	int N = 10;
	Zombie *zombie = zombieHorde(N, "fesse");
	for (int i = 0; i < N; i++)
		zombie[i].announce();
	delete[] zombie;
}

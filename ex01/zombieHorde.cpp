#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	if (N < 1)
		return (NULL);
	Zombie *zombie = new Zombie[N];
	if (!zombie)
	{
		std::cout << "Allocation n'a pas fonctionne\n";
		return (NULL);
	}
	for (int i = 0;i < N; i++)
		zombie[i].change_name(name);
	return (zombie);
}

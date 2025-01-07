#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name);

int	main(void)
{
	int		hordeSize;
	Zombie	*horde;

	hordeSize = 5;
	horde = zombieHorde(hordeSize, "Walker");
	if (horde)
	{
		// Announce all zombies
		for (int i = 0; i < hordeSize; i++)
		{
			std::cout << "Zombie " << i + 1 << " announces: ";
			horde[i].announce();
		}
		// Clean up the horde
		delete[] horde;
	}
	return (0);
}

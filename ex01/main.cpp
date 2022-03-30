#include "Zombie.hpp"

int main()
{
	Zombie *horde = zombieHorde(42, "zombox");

	for (int i = 0; i < 42; ++i) {
		horde[i].announce();
	}
	return 0;
}


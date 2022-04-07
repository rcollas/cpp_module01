#include "Zombie.hpp"

int main()
{

	Zombie stack = Zombie("stack");
	Zombie *heap = newZombie("heap");

	randomChump("randomChump");

	stack.announce();
	heap->announce();

	delete heap;

	return 0;
}


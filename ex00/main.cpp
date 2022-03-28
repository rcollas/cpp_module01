#include "Zombie.hpp"

Zombie *heapZombie(std::string type) {

	Zombie *heap;
	Zombie stack("Polo");

	heap = NULL;
	if (type == "HEAP") {
		heap = newZombie("zombox");
	} else if (type == "STACK"){
		heap = &stack;
	}
	return heap;
}

int main()
{
	Zombie *stack = heapZombie("STACK");
	Zombie *heap = heapZombie("HEAP");

	stack->announce();
	heap->announce();
	return 0;
}


#include "Harl.hpp"

int main(int ac, char **av) {

	Harl myFriendHarl;

	if (ac != 2) {
		std::cerr << "Wrong number of arguments" << std::endl;
		return 1;
	}

	myFriendHarl.complain(av[1]);

	return 0;
}


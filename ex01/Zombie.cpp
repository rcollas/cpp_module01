#include "Zombie.hpp"

Zombie::Zombie() : m_name("zombox"){}

Zombie::Zombie(const std::string& name) {

	m_name = name;
}

Zombie::~Zombie() {

	std::cout << "Destructor call on " << m_name << std::endl;
}

void Zombie::announce() {

	std::cout << m_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie* newZombie(std::string name) {

	return new Zombie(name);
}

void randomChump(std::string name) {

	Zombie chump(name);
	chump.announce();
}
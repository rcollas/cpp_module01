#ifndef CPP_MODULE01_ZOMBIE_HPP
#define CPP_MODULE01_ZOMBIE_HPP

#include <iostream>

class Zombie {

	public:
		Zombie();
		explicit Zombie(const std::string& name);
		~Zombie();
		void announce();
	private:
		std::string m_name;
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);


#endif

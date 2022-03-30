#ifndef CPP_MODULE01_HUMANA_HPP
#define CPP_MODULE01_HUMANA_HPP

#include "Weapon.hpp"

class HumanA {

	public:
		HumanA(std::string name, Weapon& weapon);
		~HumanA();
		void attack();
	private:
		std::string m_name;
		Weapon &m_weapon;
};


#endif

#ifndef CPP_MODULE01_HUMANB_HPP
#define CPP_MODULE01_HUMANB_HPP

#include "Weapon.hpp"

class HumanB {

	public:
		HumanB(std::string name);
		~HumanB();
		void attack();
		void setWeapon(Weapon& weapon);
	private:
		std::string m_name;
		Weapon *m_weapon;
};


#endif

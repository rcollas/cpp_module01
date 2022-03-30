#ifndef CPP_MODULE01_WEAPON_HPP
#define CPP_MODULE01_WEAPON_HPP

#include <iostream>

class Weapon {

	public:
		Weapon(std::string type);
		~Weapon();
		const std::string& getType();
		void setType(std::string const type);

	private:
		std::string m_type;
};


#endif

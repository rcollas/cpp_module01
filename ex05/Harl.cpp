#include "Harl.hpp"

Harl::Harl() {}

Harl::~Harl() {}

void Harl::debug() const {

	std::cerr << "[DEBUG]" << std::endl;
	std::cerr << "I love having extra bacon for my "
				 "7XL-double-cheese-triple-pickle-special-ketchup"
				 " burger. I really do!" << std::endl;
}

void Harl::info() const {

	std::cerr << "[INFO]" << std::endl;
	std::cerr << "I cannot believe adding extra bacon costs more money."
				 " You didn’t put enough bacon in my burger! "
				 "If you did, I wouldn’t be asking"
				 " for more!" << std::endl;
}

void Harl::warning() const {

	std::cerr << "[WARNING]" << std::endl;
	std::cerr << "I think I deserve to have some extra bacon for free. "
				 "I’ve been coming for years whereas you started "
				 "working here since last month." << std::endl;
}

void Harl::error() const {

	std::cerr << "[ERROR]" << std::endl;
	std::cerr << "This is unacceptable! "
				 "I want to speak to the manager now."
				 << std::endl;
}

void Harl::complain(std::string level) {

	map::const_iterator i = getMap().find(level);
	if (i == getMap().end())
		return ;
	(this->*(i->second))();
}

const Harl::map& Harl::getMap() {

	static const map m = constructMap();
	return m;
}

const Harl::map Harl::constructMap() {

	map m;
	m["DEBUG"] = &Harl::debug;
	m["INFO"] = &Harl::info;
	m["WARNING"] = &Harl::warning;
	m["ERROR"] = &Harl::error;
	return m;
}
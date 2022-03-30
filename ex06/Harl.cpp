#include "Harl.hpp"

Harl::Harl() {}

Harl::~Harl() {}

void Harl::debug() const {

	std::cerr << "I love having extra bacon for my "
				 "7XL-double-cheese-triple-pickle-special-ketchup"
				 " burger. I really do!" << std::endl;
}

void Harl::info() const {

	std::cerr << "I cannot believe adding extra bacon costs more money."
				 " You didn’t put enough bacon in my burger! "
				 "If you did, I wouldn’t be asking"
				 " for more!" << std::endl;
}

void Harl::warning() const {

	std::cerr << "I think I deserve to have some extra bacon for free. "
				 "I’ve been coming for years whereas you started "
				 "working here since last month." << std::endl;
}

void Harl::error() const {

	std::cerr << "This is unacceptable! "
				 "I want to speak to the manager now."
				 << std::endl;
}

std::string getIndex(std::string level) {

	if (level == "DEBUG")
		return "1";
	if (level == "INFO")
		return "2";
	if (level == "WARNING")
		return "3";
	if (level == "ERROR")
		return "4";
	return "0";
}

void Harl::complain(std::string level) {

	map::const_iterator i = getMap().find(getIndex(level));
	if (i == getMap().end())
		return ;
	while (i != getMap().end()) {
		std::cout << "[" << i->first << "]" << std::endl;
		(this->*(i->second))();
		std::cout << std::endl;
		i++;
	}
}

const Harl::map& Harl::getMap() {

	static const map m = constructMap();
	return m;
}

const Harl::map Harl::constructMap() {

	map m;
	m["1"] = &Harl::debug;
	m["2"] = &Harl::info;
	m["3"] = &Harl::warning;
	m["4"] = &Harl::error;
	return m;
}
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

int getIndex(std::string level) {

	if (level == "DEBUG")
		return 0;
	if (level == "INFO")
		return 1;
	if (level == "WARNING")
		return 2;
	if (level == "ERROR")
		return 3;
	return 4;
}

void Harl::complain(std::string level) {

	int i = getIndex(level);

	switch (i) {
		case 0:
			this->debug();
			this->info();
			this->warning();
			this->error();
			break ;
		case 1:
			this->info();
			this->warning();
			this->error();
			break ;
		case 2:
			this->warning();
			this->error();
			break ;
		case 3:
			this->error();
			break ;
		default:
			std::cout << "[Probably complaining about insignificant problems]";
			std::cout << std::endl;
			break ;
	}
}
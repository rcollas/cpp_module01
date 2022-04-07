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

	initFunc();
	int i = getIndex(level);
	if (i == 4) {
		std::cout << "[Probably complaining about insignificant problems]"
				  << std::endl;
	} else {
			std::cout << "[" << m_level[i] << "]" << std::endl;
			(this->*m_func[i])();
			std::cout << std::endl;
	}
}

int Harl::getIndex(std::string level) {

	size_t i = 0;
	size_t nbOfElem = sizeof(m_level) / sizeof(*m_level);

	while (i < nbOfElem && level != m_level[i]) {
		i++;
	}
	return i;
}

void Harl::initFunc() {

	m_level[0] = "DEBUG"; m_func[0] = &Harl::debug;
	m_level[1] = "INFO"; m_func[1] = &Harl::info;
	m_level[2] = "WARNING"; m_func[2] = &Harl::warning;
	m_level[3] = "ERROR"; m_func[3] = &Harl::error;
}

#ifndef CPP_MODULE01_HARL_HPP
#define CPP_MODULE01_HARL_HPP

#include <iostream>
#include <map>
#include <string>


class Harl {

	typedef void(Harl::*harlPtr)() const;

	public:
		Harl();
		~Harl();
		void complain(std::string level);

	private:
		void debug() const;
		void info() const;
		void warning() const;
		void error() const;
};


#endif

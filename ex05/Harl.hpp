#ifndef CPP_MODULE01_HARL_HPP
#define CPP_MODULE01_HARL_HPP

#include <iostream>
#include <map>
#include <string>


class Harl {

	typedef std::map<std::string, void(Harl::*)() const> map;

	public:
		Harl();
		~Harl();
		void complain(std::string level);

	private:
		void debug() const;
		void info() const;
		void warning() const;
		void error() const;
		const map& getMap();
		const map constructMap();
};


#endif

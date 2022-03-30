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
		std::string m_level[4];
		harlPtr m_func[4];
		void debug() const;
		void info() const;
		void warning() const;
		void error() const;
		void initFunc();
		int getIndex(std::string level);
};


#endif

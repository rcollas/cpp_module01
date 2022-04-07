#ifndef CPP_MODULE01_HARL_HPP
#define CPP_MODULE01_HARL_HPP

#include <iostream>
#include <string>


class Harl {

		typedef void(Harl::*HarlPtr)() const;

	public:
		Harl();
		~Harl();
		void complain(std::string level);

	private:
		void debug() const;
		void info() const;
		void warning() const;
		void error() const;
		void initFunc();
		int getIndex(std::string level);
		std::string m_level[4];
		HarlPtr m_func[4];

};


#endif

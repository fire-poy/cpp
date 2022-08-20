#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>

class Harl
{
	public:
	
		Harl(void);
		~Harl(void);
		void		complain(std::string level);

	private:
		std::string	_name;
		void		_debug(void) const;
		void		_info(void) const;
		void		_warning(void) const;
		void		_error(void) const;
};

typedef void (Harl::*f_ptr)(void) const;

#endif

// // from Harl class
// 	void(*Harl::fun)(void) const
	
// // Normal
// 	void(*fun)(void)

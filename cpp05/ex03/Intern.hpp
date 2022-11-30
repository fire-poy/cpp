#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include "AForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern
{
	public:
	
		Intern();
		Intern(Intern const & src);
		Intern & operator=(Intern const & rhs);
		~Intern();

		AForm	*makeForm(std::string const formName, std::string const target) const; 
};

#endif

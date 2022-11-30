#include "Intern.hpp"

Intern::Intern()
{
}

Intern::Intern(Intern const & src)
{
	*this = src;
}

Intern::~Intern()
{
}

Intern &		Intern::operator=(Intern const & rhs)
{
	if (&rhs == this)
		return *this;
	return *this;
}

AForm	*Intern::makeForm(std::string const formName, std::string const target) const
{
	AForm		*form = NULL;
	std::string	validForm[] = { "robotomy request",
								"shrubbery creation",
								"presidential pardon"};

	for (int i(0); i < 3; i++)
	{
		if (formName == validForm[i])
		{
			std::cout << "Intern creates " << formName << " form" << std::endl;
			switch (i)
			{
				case 0:
					return form = new RobotomyRequestForm(target);
				case 1:
					return form = new ShrubberyCreationForm(target);		
				case 2:
					return form = new PresidentialPardonForm(target);
			}
		}
	}
	std::cerr << "Intern can't create " << formName << " because it dosen't exist" << std::endl;
	return form;
}
#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <cstdlib>

int main()
{
	std::srand (time(NULL));

	Intern slave;
	Bureaucrat king("The king", 1);
	AForm *form;

	std::cout << "\033[0;31m" << "Failed form" << "\n\033[0;0m\n";
	form = slave.makeForm("Vacations for intern", "the slave");
	if (form)
	{
		king.signForm(*form);
		king.executeForm(*form);
		delete form;
	}

	std::cout << "\n\033[0;96m" << "robotomy" << "\n\033[0;0m\n";
	form = slave.makeForm("robotomy request", "the wizard");
	if (form)
	{
		king.signForm(*form);
		king.executeForm(*form);
		delete form;
	}

	std::cout << "\n\033[0;91m" << "Shrubbery" << "\n\033[0;0m\n";
	form = slave.makeForm("shrubbery creation", "chou");
	if (form)
	{
		king.signForm(*form);
		king.executeForm(*form);
		delete form;
	}
	
	std::cout << "\n\033[0;95m" << "Presidential pardon" << "\n\033[0;0m\n";
	form = slave.makeForm("presidential pardon", "Miss gruyere");
	if (form)
	{
		king.signForm(*form);
		king.executeForm(*form);
		delete form;
	}
	return 0;
}

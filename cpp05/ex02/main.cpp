#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

void	upgradeForExe(Bureaucrat b, AForm &f)
{
	while (1)
	{
		try
		{
			b.executeForm(f);
			if (b.getGrade() > 5)
				b.gradeUp();
			else 
				break;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
}

int main()
{
	std::cout << "\n\033[0;31m" << "form creation" << "\n\033[0;0m\n";
	
	ShrubberyCreationForm f;
	std::cout << f << std::endl;

	ShrubberyCreationForm mAct("Marriage act");
	std::cout << mAct<< std::endl;

	ShrubberyCreationForm divorceAct("Divorce act");
	std::cout << mAct<< std::endl;
	divorceAct = mAct;
	std::cout << divorceAct << std::endl;

	std::cout << "\n\033[0;31m" << "Bureaucrat creation" << "\n\033[0;0m\n";

	Bureaucrat king("The king", 10);
	Bureaucrat slave;

	std::cout << "\n\033[0;31m" << "Copy form" << "\n\033[0;0m\n";

	ShrubberyCreationForm copySh(mAct);
	std::cout << std::endl;

	std::cout << "\n\033[0;31m" << "Sign Form" << "\n\033[0;0m\n";

	slave.signForm(f);
	slave.signForm(mAct);

	std::cout << std::endl;

	king.signForm(f);
	king.signForm(mAct);
	king.signForm(divorceAct);

	std::cout << "\n\033[0;31m" << "Execute Form" << "\n\033[0;0m\n";

	slave.executeForm(f);
	slave.executeForm(mAct);

	std::cout << std::endl;

	king.executeForm(f);
	king.executeForm(mAct);
	king.executeForm(divorceAct);
	king.executeForm(copySh);

	std::cout << std::endl;

	std::cout << "\n\033[0;96m" << "Robotomisation" << "\n\033[0;0m\n";
	RobotomyRequestForm ch("chicken");
	RobotomyRequestForm a;

	std::cout << std::endl;

	king.signForm(a);
	king.signForm(ch);
	king.executeForm(a);
	king.executeForm(ch);

	std::cout << "\n\033[0;91m" << "Presidential Pardon" << "\n\033[0;0m\n";

	PresidentialPardonForm p;
	PresidentialPardonForm p1("Miss Gruyere");

	std::cout << std::endl;

	king.signForm(p);
	king.signForm(p1);
	king.executeForm(p);
	king.executeForm(p1);

	upgradeForExe(king, p1);
	return 0;
}

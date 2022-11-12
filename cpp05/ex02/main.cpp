#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"

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

	std::cout << "\n\033[0;31m" << "Other tests" << "\n\033[0;0m\n";
	std::cout << mAct.getName() << std::endl;
	std::cout << mAct.isSigned() << std::endl;

	return 0;
}

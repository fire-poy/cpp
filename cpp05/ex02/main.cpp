#include "Bureaucrat.hpp"

void tryConstructForm(const std::string &name, int gradeExe, int gradeSign)
{
	try
	{
		Form f(name, gradeSign, gradeExe);
		std::cout << f << std::endl;
// 		Bureaucrat c(b);
// 		std::cout << c << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
}

void	SignForm(Bureaucrat &B, Form &f)
{
	try
	{
		B.signForm(f);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}


int main()
{
	std::cout << "\n\033[0;31m" << "Create form" << "\n\033[0;0m\n";
	tryConstructForm("Divorce", 40, 25);
	tryConstructForm("Divorce", 0, 25);
	tryConstructForm("Divorce", 10, 0);

	std::cout << "\n\033[0;31m" << "signe form" << "\n\033[0;0m\n";
	
	Form f;
	std::cout << f;
	Form mAct("Marriage act", 100, 30);
	std::cout << mAct;
	Form divorceAct("Divorce act", 9, 8);
	std::cout << mAct;

	Bureaucrat king("The king", 10);
	Bureaucrat slave;

	SignForm(king, mAct);
	SignForm(king, divorceAct);
	SignForm(king, f);
	SignForm(slave, mAct);
	SignForm(slave, f);
	return 0;
}

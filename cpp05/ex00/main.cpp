#include "Bureaucrat.hpp"

void tryConstructBureaucrat(const std::string &name, int grade)
{
	try
	{
		Bureaucrat b(name, grade);
		std::cout << b << std::endl;
		Bureaucrat c(b);
		std::cout << c << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
}
int main()
{
	std::cout << "\n\033[0;31m" << "Construction" << "\n\033[0;0m\n";
	tryConstructBureaucrat("Jhonny", -1);
	tryConstructBureaucrat("Pepe", 0);
	tryConstructBureaucrat("Juan", 1);
	tryConstructBureaucrat("Roberto", 2);
	tryConstructBureaucrat("Marie", 149);
	tryConstructBureaucrat("Peter", 150);
	tryConstructBureaucrat("XIOXIN tan", 151);

	std::cout << "\n\033[0;31m" << "Grade Up" << "\n\033[0;0m\n";
	Bureaucrat peter("Peter", 2);
	try
	{
		std::cout << peter << std::endl;
		peter.gradeUp();
		std::cout << peter << std::endl;
		peter.gradeUp();
		std::cout << peter << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << peter << std::endl;
	
	std::cout << "\n\033[0;31m" << "Grade down" << "\n\033[0;0m\n";
	try
	{
		Bureaucrat john("John", 148);
		std::cout << john << std::endl;
		john.gradeDown();
		std::cout << john << std::endl;
		john.gradeDown();
		std::cout << john << std::endl;
		john.gradeDown();
		std::cout << john << std::endl;
		std::cout << "sjdosaiojdsiajodjohn" << std::endl;

	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

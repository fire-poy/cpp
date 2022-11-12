#include "RobotomyRequestForm.hpp"
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm(std::string const & target) :
AForm("RobotomyRequestForm", RobotomyRequestForm::_gradeToSign, RobotomyRequestForm::_gradeToExe), _target(target)
{
	std::cout << "RobotomyRequestForm Default Constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src) : AForm(src), _target(src._target)
{
	std::cout << "RobotomyRequestForm Copy Constructor called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm Destructor called" << std::endl;
}

// operators
RobotomyRequestForm &		RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs)
{
	AForm::operator=(rhs);
	this->_target = rhs._target;//getTarget();
	std::cout << "RobotomyRequestForm Assignment operator called" << std::endl;
	return *this;
}

void	RobotomyRequestForm::executionWork() const
{
	std::cout << "Shium Shiiiiiiiiiiiiiiiium" << std::endl;
	if (std::rand() % 2)
		std::cout << this->_target << " has been robotomisized" << std::endl;
	else
		std::cout << this->_target << " robotomisation has failed" << std::endl;
}
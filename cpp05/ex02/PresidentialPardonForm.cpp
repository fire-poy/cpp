#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string const & target) :
AForm("PresidentialPardonForm", PresidentialPardonForm::_gradeToSign, PresidentialPardonForm::_gradeToExe), _target(target)
{
	std::cout << "PresidentialPardonForm Default Constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src) : AForm(src), _target(src._target)
{
	std::cout << "PresidentialPardonForm Copy Constructor called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm Destructor called" << std::endl;
}

// operators
PresidentialPardonForm &		PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs)
{
	AForm::operator=(rhs);
	this->_target = rhs._target;//getTarget();
	std::cout << "PresidentialPardonForm Assignment operator called" << std::endl;
	return *this;
}

void	PresidentialPardonForm::executionWork() const
{
	std::cout << this->_target << " is forgiven by Zaphod Beeblebrox" << std::endl;
}

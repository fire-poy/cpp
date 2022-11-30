#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string const & target) :
AForm("PresidentialPardonForm", PresidentialPardonForm::_gradeToSign, PresidentialPardonForm::_gradeToExe), _target(target)
{
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src) : AForm(src), _target(src._target)
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

// operators
PresidentialPardonForm &		PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs)
{
	AForm::operator=(rhs);
	this->_target = rhs._target;//getTarget();
	return *this;
}

void	PresidentialPardonForm::executionWork() const
{
	std::cout << this->_target << " is forgiven by Zaphod Beeblebrox" << std::endl;
}

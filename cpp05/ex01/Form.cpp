#include "Bureaucrat.hpp"
#include "Form.hpp"

Form::Form(std::string const & name, int const gradeToSign, int const gradeToExe):
_name(name) , _gradeToSign(gradeToSign), _gradeToExe(gradeToExe), _signed(false)
{
	std::cout << "Form Default Constructor called" << std::endl;
	checkGrades();
}

Form::Form(Form const & src) : _name(src.getName()) , _gradeToSign(src.getGradeToSign()),
_gradeToExe(src.getGradeToExe()), _signed(src.isSigned())
{
	std::cout << "Form Copy Constructor called" << std::endl;
}

Form::~Form()
{
	std::cout << "Form Destructor called" << std::endl;
}

// operators
Form &		Form::operator=(Form const & rhs)
{
	this->_signed = rhs.isSigned();
	std::cout << "Form Assignment operator called" << std::endl;
	return *this;
}

std::ostream	& operator<<(std::ostream & o, Form const & rhs)
{
	o << rhs.getName() << " form" << std::endl;
	o << "Grade to be signed: " << rhs.getGradeToSign() << std::endl;
	o << "Grade to be executed: " << rhs.getGradeToExe() << std::endl;
	return o;
}

std::string	Form::getName() const
{
	return this->_name;
}

int	Form::getGradeToSign() const
{
	return this->_gradeToSign;
}

int	Form::getGradeToExe() const
{
	return this->_gradeToExe;
}

void	Form::checkGrades() const
{
	if (this->_gradeToSign > 150)
		throw GradeTooLowException();
	if (this->_gradeToSign < 1)
		throw GradeTooHighException();
	if (this->_gradeToExe > 150)
		throw GradeTooLowException();
	if (this->_gradeToExe < 1)
		throw GradeTooHighException();
}

bool	Form::isSigned() const
{
	return this->_signed;
}

void	Form::beSigned(const Bureaucrat &b)
{
	if (b.getGrade() <= this->_gradeToSign)
	{
		this->_signed = true;
		std::cout << b << " signed form " << this->_name << std::endl;
	}
	else 
		throw GradeTooLowException();
}
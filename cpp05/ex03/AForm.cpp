#include "Bureaucrat.hpp"
#include "AForm.hpp"

AForm::AForm(std::string const & name, int const gradeToSign, int const gradeToExe):
_name(name) , _gradeToSign(gradeToSign), _gradeToExe(gradeToExe), _signed(false)
{
	checkGrades();
}

AForm::AForm(AForm const & src) : _name(src.getName()) , _gradeToSign(src.getGradeToSign()),
_gradeToExe(src.getGradeToExe()), _signed(src.isSigned())
{
}

AForm::~AForm()
{
}

// operators
AForm &		AForm::operator=(AForm const & rhs)
{
	this->_signed = rhs.isSigned();
	return *this;
}

std::ostream	& operator<<(std::ostream & o, AForm const & rhs)
{
	o << rhs.getName() << " form" << std::endl;
	o << "Grade to be signed: " << rhs.getGradeToSign() << std::endl;
	o << "Grade to be executed: " << rhs.getGradeToExe() << std::endl;
	return o;
}

std::string	AForm::getName() const
{
	return this->_name;
}

int	AForm::getGradeToSign() const
{
	return this->_gradeToSign;
}

int	AForm::getGradeToExe() const
{
	return this->_gradeToExe;
}

void	AForm::checkGrades() const
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

bool	AForm::isSigned() const
{
	return this->_signed;
}

void	AForm::beSigned(const Bureaucrat &b)
{
	if (b.getGrade() <= this->_gradeToSign)
	{
		this->_signed = true;
		std::cout << b << " signed form " << this->_name << std::endl;
	}
	else 
		throw GradeTooLowException();
}

// execute l'action du AFormulaire des classes derivees
// AForm doit etre signé et grade suffisant sinon Exeption pertinente
void	AForm::execute(Bureaucrat const & executor) const
{
	if (!this->_signed)
		throw FormNotSignedException();
	else if (executor.getGrade() <= this->_gradeToExe)
	{
		executionWork();
		std::cout << executor << " executed form " << this->_name << std::endl;
	}
	else
		throw GradeTooLowException();		
}



#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const & name, int grade) : _name(name) , _grade(grade)
{
	std::cout << "Bureaucrat Default Constructor called" << std::endl;
	checkGrade();
}

Bureaucrat::Bureaucrat(Bureaucrat const & src) : _name(src.getName()) , _grade(src.getGrade())
{
	std::cout << "Bureaucrat Copy Constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat Destructor called" << std::endl;
}

// operators
Bureaucrat &		Bureaucrat::operator=(Bureaucrat const & rhs)
{
	// this->_name = rhs.getName();
	std::cout << "Name is const and can't be overwritten, only grade was copied"
		<< std::endl;
	this->_grade = rhs.getGrade();
	std::cout << "Bureaucrat Assignment operator called" << std::endl;
	return *this;
}

std::ostream	& operator<<(std::ostream & o, Bureaucrat const & rhs)
{
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
	return o;
}

std::string	Bureaucrat::getName() const
{
	return this->_name;
}

int	Bureaucrat::getGrade() const
{
	return this->_grade;
}

void	Bureaucrat::gradeUp()
{
	if (this->_grade == 1)
		throw GradeTooHighException();
	else
		this->_grade--;
}

void	Bureaucrat::gradeDown()
{
	if (this->_grade == 150)
		throw GradeTooLowException();
	else
		this->_grade++;
}

void	Bureaucrat::checkGrade() const
{
	if (this->_grade > 150)
		throw GradeTooLowException();
	if (this->_grade < 1)
		throw GradeTooHighException();
}

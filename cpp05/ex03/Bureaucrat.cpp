#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const & name, int grade) : _name(name) , _grade(grade)
{
	checkGrade();
}

Bureaucrat::Bureaucrat(Bureaucrat const & src) : _name(src.getName()) , _grade(src.getGrade())
{
}

Bureaucrat::~Bureaucrat()
{
}

// operators
Bureaucrat &		Bureaucrat::operator=(Bureaucrat const & rhs)
{
	std::cout << "Name is const and can't be overwritten, only grade was copied"
		<< std::endl;
	this->_grade = rhs.getGrade();
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

void	Bureaucrat::signForm(AForm &f) const
{
	try
	{
		f.beSigned(*this);
	}
	catch(const std::exception& e)
	{
		std::cerr << this->_name << " couldn't sign " << f.getName() << " because " << e.what() << std::endl;
	}
}

void	Bureaucrat::executeForm(AForm const & form) const
{
	try
	{
		form.execute(*this);
	}
	catch(const std::exception& e)
	{
		std::cerr << this->_name << " couldn't execute " << form.getName() << " because " << e.what() << std::endl;
	}
}
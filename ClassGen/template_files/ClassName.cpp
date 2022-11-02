#include "ClassName.hpp"

ClassName::ClassName()
{
	std::cout << "Default Constructor called" << std::endl;
}


ClassName::ClassName(ClassName const & src) : _name(src.getName())
{
	std::cout << "Copy Constructor called" << std::endl;
}

ClassName::ClassName(std::string const & name) : _name(name)
{
	std::cout << "String Constructor called" << std::endl;
}

ClassName::~ClassName()
{
	std::cout << "Destructor called" << std::endl;
}

// operators
ClassName &		ClassName::operator=(ClassName const & rhs)
{
	this->_name = rhs.getName();
	std::cout << "Assignment operator called" << std::endl;
	return *this;
}

std::ostream	& operator<<(std::ostream & o, ClassName const & rhs)
{
	o << rhs.getName();
	return o;
}

// Getters/Setters
void	ClassName::setName(std::string const & name)
{
	this->_name = name;
}

std::string	ClassName::getName() const
{
	return this->_name;
}

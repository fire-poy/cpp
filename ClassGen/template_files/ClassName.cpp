#include "ClassName.hpp"

ClassName::ClassName()
{
	std::cout << "ClassName Default Constructor called" << std::endl;
}


ClassName::ClassName(ClassName const & src)
{
	std::cout << "ClassName Copy Constructor called" << std::endl;
	*this = src;
}

ClassName::ClassName(std::string const & name) : _name(name)
{
	std::cout << "ClassName String Constructor called" << std::endl;
}

ClassName::~ClassName()
{
	std::cout << "ClassName Destructor called" << std::endl;
}

// operators
ClassName &		ClassName::operator=(ClassName const & rhs)
{
	this->_name = rhs.getName();
	std::cout << "ClassName Assignment operator called" << std::endl;
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

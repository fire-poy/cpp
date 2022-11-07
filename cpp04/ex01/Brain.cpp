#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Default Constructor called" << std::endl;
}


Brain::Brain(Brain const & src) : _name(src.getName())
{
	std::cout << "Copy Constructor called" << std::endl;
}

Brain::Brain(std::string const & name) : _name(name)
{
	std::cout << "String Constructor called" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Destructor called" << std::endl;
}

// operators
Brain &		Brain::operator=(Brain const & rhs)
{
	this->_name = rhs.getName();
	std::cout << "Assignment operator called" << std::endl;
	return *this;
}

std::ostream	& operator<<(std::ostream & o, Brain const & rhs)
{
	o << rhs.getName();
	return o;
}

// Getters/Setters
void	Brain::setName(std::string const & name)
{
	this->_name = name;
}

std::string	Brain::getName() const
{
	return this->_name;
}

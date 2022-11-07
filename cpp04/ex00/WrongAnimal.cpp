#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("mammal")
{
	std::cout << "WrongAnimal Default Constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const & src) : type(src.getType())
{
	std::cout << "WrongAnimal Copy Constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Destructor called" << std::endl;
}

// operators
WrongAnimal &		WrongAnimal::operator=(WrongAnimal const & rhs)
{
	this->type = rhs.getType();
	std::cout << "WrongAnimal Assignment operator called" << std::endl;
	return *this;
}

std::ostream	& operator<<(std::ostream & o, WrongAnimal const & rhs)
{
	o << rhs.getType();
	return o;
}

// Getters/Setters
void	WrongAnimal::setType(std::string const & type)
{
	this->type = type;
}

std::string	WrongAnimal::getType() const
{
	return this->type;
}

void	WrongAnimal::makeSound() const
{
	std::cout << "Standard wrong mammal sound?" << std::endl;
}


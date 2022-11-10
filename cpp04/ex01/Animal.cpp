#include "Animal.hpp"

Animal::Animal() : type("mammal")
{
	std::cout << "Animal Default Constructor called" << std::endl;
}

Animal::Animal(Animal const & src) : type(src.getType())
{
	std::cout << "Animal Copy Constructor called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal Destructor called" << std::endl;
}

// operators
Animal &		Animal::operator=(Animal const & rhs)
{
	this->type = rhs.getType();
	std::cout << "Animal Assignment operator called" << std::endl;
	return *this;
}

// Getters/Setters
void	Animal::setType(std::string const & type)
{
	this->type = type;
}

std::string	Animal::getType() const
{
	return this->type;
}

void	Animal::makeSound() const
{
	std::cout << "Standard mammal sound?" << std::endl;
}


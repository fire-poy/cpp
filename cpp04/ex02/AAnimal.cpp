#include "AAnimal.hpp"

AAnimal::AAnimal() : type("mammal")
{
	std::cout << "AAnimal Default Constructor called" << std::endl;
}

AAnimal::AAnimal(AAnimal const & src) : type(src.getType())
{
	std::cout << "AAnimal Copy Constructor called" << std::endl;
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal Destructor called" << std::endl;
}

// operators
AAnimal &		AAnimal::operator=(AAnimal const & rhs)
{
	this->type = rhs.getType();
	std::cout << "AAnimal Assignment operator called" << std::endl;
	return *this;
}

// Getters/Setters
void	AAnimal::setType(std::string const & type)
{
	this->type = type;
}

std::string	AAnimal::getType() const
{
	return this->type;
}

void	AAnimal::makeSound() const
{
	std::cout << "Standard mammal sound?" << std::endl;
}


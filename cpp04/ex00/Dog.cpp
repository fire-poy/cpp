#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog Default Constructor called" << std::endl;
	this->type = "Dog";
}

Dog::Dog(Dog const & src) : Animal(src)
{
	std::cout << "Dog Copy Constructor called" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog Destructor called" << std::endl;
}

// operators
Dog &		Dog::operator=(Dog const & rhs)
{
	std::cout << "Dog Assignment operator called" << std::endl;
	Animal::operator=(rhs);
	return *this;
}

std::ostream	& operator<<(std::ostream & o, Dog const & rhs)
{
	o << rhs.getType();
	return o;
}

void	Dog::makeSound() const
{
	std::cout << "Waf!" << std::endl;
}


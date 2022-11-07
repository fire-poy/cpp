#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	std::cout << "Cat Default Constructor called" << std::endl;
}

Cat::Cat(Cat const & src) : Animal(src)
{
	std::cout << "Cat Copy Constructor called" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat Destructor called" << std::endl;
}

// operators
Cat &		Cat::operator=(Cat const & rhs)
{
	std::cout << "Cat Assignment operator called" << std::endl;

	Animal::operator=(rhs);
	return *this;
}

std::ostream	& operator<<(std::ostream & o, Cat const & rhs)
{
	o << rhs.getType();
	return o;
}

void	Cat::makeSound() const
{
	std::cout << "Miau!" << std::endl;
}


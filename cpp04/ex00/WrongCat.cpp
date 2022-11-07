#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "WrongCat Default Constructor called" << std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat(WrongCat const & src) : WrongAnimal(src)
{
	std::cout << "WrongCat Copy Constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Destructor called" << std::endl;
}

// operators
WrongCat &		WrongCat::operator=(WrongCat const & rhs)
{
	std::cout << "WrongCat Assignment operator called" << std::endl;
	WrongAnimal::operator=(rhs);
	return *this;
}

std::ostream	& operator<<(std::ostream & o, WrongCat const & rhs)
{
	o << rhs.getType();
	return o;
}

void	WrongCat::makeSound() const
{
	std::cout << "Miau!" << std::endl;
}


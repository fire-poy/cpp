#include "Dog.hpp"

Dog::Dog() : _brain(new Brain())
{
	std::cout << "Dog Default Constructor called" << std::endl;
	this->type = "Dog";
}

Dog::Dog(Dog const & src) : AAnimal(src)
{
	this->_brain = new Brain(*src._brain);//sans * on a addrese de brain
	std::cout << "Dog Copy Constructor called" << std::endl;
}

Dog &		Dog::operator=(Dog const & rhs)
{
	std::cout << "Dog Assignment operator called" << std::endl;
	AAnimal::operator=(rhs);
	if (this->_brain)
		delete this->_brain;
	this->_brain = new Brain(*rhs._brain);
	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog Destructor called" << std::endl;
	delete this->_brain;
}

void	Dog::makeSound() const
{
	std::cout << "Waf!" << std::endl;
}

void	Dog::setIdea(std::string const & idea, int i)
{
	this->_brain->setIdea(idea, i);
}

std::string	Dog::getIdea(int i) const
{
	return this->_brain->getIdea(i);
}


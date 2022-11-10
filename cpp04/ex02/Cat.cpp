#include "Cat.hpp"

// type herite de AAnimal en protected
Cat::Cat() : _brain(new Brain())
{
	this->type = "Cat";
	std::cout << "Cat Default Constructor called" << std::endl;
}

Cat::Cat(Cat const & src) : AAnimal(src)
{
	this->_brain = new Brain(*src._brain);//sans * on a addrese de brain
	std::cout << "Cat Copy Constructor called" << std::endl;
}

Cat &		Cat::operator=(Cat const & rhs)
{
	std::cout << "Cat Assignment operator called" << std::endl;
	AAnimal::operator=(rhs);
	if (this->_brain)
		delete (this->_brain);
	this->_brain = new Brain(*rhs._brain);//sans * on a addrese de brain
	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat Destructor called" << std::endl;
	delete this->_brain;
}

void	Cat::makeSound() const
{
	std::cout << "Miau!" << std::endl;
}

void	Cat::setIdea(std::string const & idea, int i)
{
	this->_brain->setIdea(idea, i);
}

std::string	Cat::getIdea(int i) const
{
	return this->_brain->getIdea(i);
}

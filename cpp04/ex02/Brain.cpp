#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain Default Constructor called" << std::endl;
}

Brain::Brain(Brain const & src)
{
	std::cout << "Brain Copy Constructor called" << std::endl;
	*this = src;
}

Brain &		Brain::operator=(Brain const & rhs)
{
	std::cout << "Brain Assignment operator called" << std::endl;
	for (int i(0); i < 100; ++i)
		this->_ideas[i] = rhs._ideas[i];
	return *this;
}

Brain::~Brain()
{
	std::cout << "Brain Destructor called" << std::endl;
}

// Getters/Setters
void		Brain::setIdea(std::string const & idea, int i)
{
	if (i >= 0 && i <= 99)
		this->_ideas[i] = idea;
	else
		std::cout << "brain overflow" << std::endl;
}

std::string	Brain::getIdea(int i) const
{
	if (i >= 0 && i <= 99)
		return this->_ideas[i];
	else
	{
		std::cout << "brain overflow" << std::endl;
		return "";
	}
}

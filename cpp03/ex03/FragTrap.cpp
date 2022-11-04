#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	std::cout << "FragTrap Default Constructor called" << std::endl;
	this->_name = "Unknow";
	this->_hitPoints = 100;
	this->_maxHp = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(std::string const & name) : ClapTrap(name)
{
	std::cout << "FragTrap String Constructor called" << std::endl;
	this->_hitPoints = 100;
	this->_maxHp = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(FragTrap const & src) : ClapTrap(src)
{
	std::cout << "FragTrap Copy Constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor called" << std::endl;
}

// operators
FragTrap &		FragTrap::operator=(FragTrap const & rhs)
{
	ClapTrap::operator=(rhs);
	std::cout << "FragTrap Assignment operator called" << std::endl;
	return *this;
}

void	FragTrap::highFivesGuys(void)
{
	if (this->_hitPoints > 0)
		std::cout << "FragTrap " << *this << " want to Hige Five whit you!" << std::endl;
	else
		std::cout << "FragTrap " << this->_name << " dosen't have any Hit Points left" << std::endl;
}
#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	std::cout << "ScavTrap Default Constructor called" << std::endl;
	this->_hitPoints = 100;
	this->_maxHp = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap(std::string const & name) : ClapTrap(name)
{
	std::cout << "ScavTrap String Constructor called" << std::endl;
	this->_hitPoints = 100;
	this->_maxHp = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap(ScavTrap const & src) : ClapTrap(src)
{
	std::cout << "ScavTrap Copy Constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor called" << std::endl;
}

// operators
ScavTrap &		ScavTrap::operator=(ScavTrap const & rhs)
{
	ClapTrap::operator=(rhs);
	std::cout << "ScavTrap Assignment operator called" << std::endl;
	return *this;
}

// - ScavTrap ne peut exécuter aucune action s’il n’a plus de vie ou d’énergie.
// - Les actions attaquer et réparer coûtent chacune 1 point d’énergie. 
// - Quand ScavTrap attaque, sa cible perd <attack damage> hit points. 
void	ScavTrap::attack(const std::string& target)
{
	if (this->_hitPoints > 0)
	{
		if (this->_energyPoints > 0)
		{
			std::cout << "ScavTrap " << this->_name << " attacks " << target << " causing ";
			std::cout << this->_attackDamage << " points of damage!" << std::endl;
			this->_energyPoints--;
		}
		else 
		std::cout << "ScavTrap " << this->_name << " dosen't have enough energy" << std::endl;
	}
	else
		std::cout << "ScavTrap " << this->_name << " dosen't have any Hit Points left" << std::endl;
}

void ScavTrap::guardGate(void)
{
	if (this->_hitPoints > 0)
		std::cout << "ScavTrap " << *this << " is now in Gate keeper mode!" << std::endl;
	else
		std::cout << "ScavTrap " << this->_name << " dosen't have any Hit Points left" << std::endl;
}
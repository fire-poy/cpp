#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : 
_name("ClapTrap"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap Default Constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string const & name) : 
_name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap String Constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & src)
{
	std::cout << "ClapTrap Copy Constructor called" << std::endl;
	*this = src;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor called" << std::endl;
}

std::string	ClapTrap::getName() const
{
	return this->_name;
}

// operators
ClapTrap &		ClapTrap::operator=(ClapTrap const & rhs)
{
	this->_name = rhs._name;
	this->_hitPoints = rhs._hitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_attackDamage = rhs._attackDamage;
	std::cout << "ClapTrap Assignment operator called" << std::endl;
	return *this;
}

std::ostream	& operator<<(std::ostream & o, ClapTrap const & rhs)
{
	o << rhs.getName();
	return o;
}


// - ClapTrap ne peut exécuter aucune action s’il n’a plus de vie ou d’énergie.
// - Les actions attaquer et réparer coûtent chacune 1 point d’énergie. 
// - Quand ClapTrap attaque, sa cible perd <attack damage> hit points. 
void	ClapTrap::attack(const std::string& target)
{
	if (this->_hitPoints > 0)
	{
		if (this->_energyPoints > 0)
		{
			std::cout << "ClapTrap " << this->_name << " attacks " << target << " causing ";
			std::cout << this->_attackDamage << " points of damage!" << std::endl;
			this->_energyPoints--;
		}
		else 
		std::cout << "ClapTrap " << this->_name << " dosen't have enough energy" << std::endl;
	}
	else
		std::cout << "ClapTrap " << this->_name << " dosen't have any Hit Points left" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints > 0)
	{
		std::cout << "ClapTrap " << this->_name << " has taken " << amount << " points of damage!" << std::endl;
		this->_hitPoints -= amount;
	}
	else
		std::cout << "ClapTrap " << this->_name << " dosen't have any Hit Points left" << std::endl;
}

// - Quand ClapTrap se répare, il regagne \<amount> hit points. 
void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hitPoints > 0)
	{
		if (this->_energyPoints > 0)
		{
			std::cout << "ClapTrap " << this->_name << " it's being repaired gaining ";
			std::cout << amount << " Hit Points" << std::endl;
			this->_energyPoints--;
		}
		else 
			std::cout << "ClapTrap " << this->_name << " dosen't have enough energy" << std::endl;
	}
	else
		std::cout << "ClapTrap " << this->_name << " dosen't have any Hit Points left" << std::endl;
}

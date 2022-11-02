#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) 
{
	std::cout << "DiamondTrap Default Constructor called" << std::endl;
	ClapTrap::_name += "_clap_name";//hay dos nombres
	this->_name = "DiamondT";
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap(std::string const & name) : ClapTrap(name + "_clap_name"), _name(name)
{
	std::cout << "DiamondTrap String Constructor called" << std::endl;
	// ClapTrap::_name += "_clap_name";//sin este ClapTrap no funca

	// this->_name = name;
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap(DiamondTrap const & src) :
ClapTrap(src), ScavTrap(src), FragTrap(src), _name(src._name)
{
	std::cout << "DiamondTrap Copy Constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << this->_name << " Destructor called" << std::endl;
}

// operators
DiamondTrap &		DiamondTrap::operator=(DiamondTrap const & rhs)
{
	FragTrap::operator=(rhs);
	ScavTrap::operator=(rhs);
	this->_name = rhs._name;
	std::cout << "DiamondTrap Assignment operator called" << std::endl;
	return *this;
}

void	DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(void)
{
	if (this->_hitPoints > 0)
		std::cout << "I'm " << ClapTrap::_name << " or " << this->_name << " ?" << std::endl;
	else
		std::cout << "DiamondTrap " << this->_name << " dosen't have any Hit Points left" << std::endl;
}
#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include <iostream>
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	public:
	
		DiamondTrap(void);
		DiamondTrap(std::string const & name);
		DiamondTrap(DiamondTrap const & src);
		DiamondTrap & operator=(DiamondTrap const & rhs);
		virtual ~DiamondTrap(void);

		void attack(const std::string& target);
		void whoAmI(void);

	private:

		std::string _name;
};

#endif
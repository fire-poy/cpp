#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include "Animal.hpp"

class Dog : public Animal
{
	public:
	
		Dog();
		Dog(Dog const & src);
		Dog & operator=(Dog const & rhs);
		~Dog();

		void	makeSound() const;
};

std::ostream	& operator<<(std::ostream & o, Dog const & inst);

#endif

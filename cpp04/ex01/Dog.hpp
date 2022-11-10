#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	public:
	
		Dog();
		Dog(Dog const & src);
		Dog & operator=(Dog const & rhs);
		~Dog();

		void		makeSound() const;
		void		setIdea(std::string const & idea, int i);
		std::string	getIdea(int i) const ;

	private:
		Brain	*_brain;
};

#endif

#ifndef  WRONGCAT_HPP
# define WRONGCAT_HPP

# include <iostream>
# include "WrongAnimal.hpp"


class WrongCat : public WrongAnimal
{
	public:
	
		WrongCat();
		WrongCat(WrongCat const & src);
		WrongCat & operator=(WrongCat const & rhs);
		~WrongCat();

		void	makeSound() const;
};

std::ostream	& operator<<(std::ostream & o, WrongCat const & inst);

#endif

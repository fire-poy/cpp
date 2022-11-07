#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
	public:
	
		Animal();
		Animal(Animal const & src);
		Animal & operator=(Animal const & rhs);
		virtual ~Animal();

		void			setType(std::string const & type);
		std::string		getType() const ;
		virtual void	makeSound() const;

	protected:
		std::string	type;
};

std::ostream	& operator<<(std::ostream & o, Animal const & inst);

#endif

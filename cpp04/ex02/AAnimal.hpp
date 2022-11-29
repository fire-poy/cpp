#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class AAnimal
{
	public:
	
		AAnimal();
		AAnimal(AAnimal const & src);
		AAnimal & operator=(AAnimal const & rhs);
		virtual ~AAnimal();

		void			setType(std::string const & type);
		std::string		getType() const;
		virtual void	makeSound() const = 0;

	protected:
		std::string	type;
};

std::ostream	& operator<<(std::ostream & o, AAnimal const & inst);

#endif

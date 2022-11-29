#ifndef  WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
	public:
	
		WrongAnimal();
		WrongAnimal(WrongAnimal const & src);
		WrongAnimal & operator=(WrongAnimal const & rhs);
		virtual ~WrongAnimal();

		void			setType(std::string const & type);
		std::string		getType() const;
		void	makeSound() const;

	protected:
		std::string	type;
};

std::ostream	& operator<<(std::ostream & o, WrongAnimal const & inst);

#endif

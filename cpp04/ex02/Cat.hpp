#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat : public AAnimal
{
	public:
	
		Cat();
		Cat(Cat const & src);
		Cat & operator=(Cat const & rhs);
		~Cat();

		void		makeSound() const;
		void		setIdea(std::string const & idea, int i);
		std::string	getIdea(int i) const;

	private:
		Brain	*_brain;
};

#endif

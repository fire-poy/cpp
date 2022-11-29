#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
	public:
	
		Brain();
		Brain(Brain const & src);
		Brain & operator=(Brain const & rhs);
		~Brain();

		void		setIdea(std::string const & idea, int i);
		std::string	getIdea(int) const;

	private:
		std::string _ideas[100];
};

#endif

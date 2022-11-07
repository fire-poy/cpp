#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
	public:
	
		Brain();
		// Brain(int const n);
		// Brain(std::string const & name);
		Brain(Brain const & src);
		~Brain();
		Brain & operator=(Brain const & rhs);

		void	bar(char const c) const;
		void	bar(int const n) const;
		void	bar(float const f) const;
		void	bar(Brain const & i) const;
		
		void		setName(std::string const & name);
		std::string	getName() const ;
		int			getFoo() const;

	private:

		int			_foo;
		std::string	_name;
};

std::ostream	& operator<<(std::ostream & o, Brain const & inst);

#endif

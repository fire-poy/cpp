#ifndef STRINGCONVERSOR_HPP
# define STRINGCONVERSOR_HPP

# include <iostream>
# include <cmath>
# include <limits>
# include <istream>

class StringConversor
{
	public:
	
		StringConversor();
		StringConversor(std::string const & input);
		StringConversor(StringConversor const & src);
		StringConversor & operator=(StringConversor const & rhs);
		~StringConversor();

		// void	bar(StringConversor const & i) const;
		
		void		setName(std::string const & name);
		std::string	getName() const ;
		// int			getFoo() const;


	private:

		enum
		{
			UNKNOWN
			CHAR
			INT
			FLOAT
			DOUBLE
		}
		
		void	detectType();
		bool	specialCase(std::string const input);
		int			_type;
		char		_c;
		int			_i
		float		_f;
		double		_d;
		
		std::string	_input;
};

std::ostream	& operator<<(std::ostream & o, StringConversor const & inst);

#endif

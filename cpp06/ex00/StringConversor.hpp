#ifndef STRINGCONVERSOR_HPP
# define STRINGCONVERSOR_HPP

# include <iostream>
# include <cmath>
# include <limits>
# include <sstream>
# include <climits>

class StringConversor
{
	public:

		StringConversor();
		StringConversor(std::string const & input);
		StringConversor(StringConversor const & src);
		StringConversor & operator=(StringConversor const & rhs);
		~StringConversor();

		void		setInput(std::string const & input);
		std::string	getInput() const ;
		void		printAll();

	private:

		enum //_type
		{
			UNKNOWN,
			CHAR,
			INT,
			FLOAT,
			DOUBLE
		};
		
		bool	specialCase(std::string const input);
		bool	detectType(std::string const input);
		// void	convertString(std::string const input);
		// void	cast();
		void	printUnknown();
		void	printChar();
		void	printInt();
		void	printFloat();
		void	printDouble();

		int			_type;
		char		_c;
		int			_i;
		float		_f;
		double		_d;
		
		std::string	_input;
};

std::ostream	& operator<<(std::ostream & o, StringConversor const & inst);

#endif

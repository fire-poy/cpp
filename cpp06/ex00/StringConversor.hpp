#ifndef STRINGCONVERSOR_HPP
# define STRINGCONVERSOR_HPP

# include <iostream>
# include <cmath>
# include <limits>
# include <sstream>
# include <climits>
# include <iomanip>

class StringConversor
{
	public:

		StringConversor(std::string const & input = "no input");
		StringConversor(StringConversor const & src);
		StringConversor & operator=(StringConversor const & rhs);
		~StringConversor();

		void		setInput(std::string const & input);
		std::string	getInput() const ;
		void		printAll();

	private:

		enum
		{
			UNKNOWN,
			CHAR,
			INT,
			FLOAT,
			DOUBLE
		};
		
		std::string	_input;
		int			_type;
		char		_c;
		int			_i;
		float		_f;
		double		_d;

		bool	isSpecialCase(std::string const input);
		bool	isNumberType(std::string const input);
		void	detectType(std::string const input);
		void	printFromUnknown();
		void	printFromChar();
		void	printFromInt();
		void	printFromFloat();
		void	printFromDouble();
};

std::ostream	& operator<<(std::ostream & o, StringConversor const & inst);

#endif

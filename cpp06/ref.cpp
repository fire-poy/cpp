
#ifndef PARSER_HPP
#define PARSER_HPP

#include <string>

class Parser
{
	public:
		Parser();
		Parser(const Parser &);
		Parser &operator=(const Parser &);
		~Parser();

		bool	convert(const std::string &str);
		void	print_results() ;

	private:

		enum Source {
			UNKNOWN,
			CHAR,
			INT,
			FLOAT,
			DOUBLE
		};

		void	print_char();
		void	print_int();
		void	print_float();
		void	print_double();

		Source	_source;
		float	_f;
		char	_c;
		double	_d;
		int		_i;

};

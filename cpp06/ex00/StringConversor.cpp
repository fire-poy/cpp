#include "StringConversor.hpp"

StringConversor::StringConversor()
{
}


StringConversor::StringConversor(StringConversor const & src)
{
	*this = src;
}

StringConversor::StringConversor(std::string const & input) : _input(input)
{
	if (detectType(input))
	{
		// convertString();
	}
}

StringConversor::~StringConversor()
{
}

// operators
StringConversor &		StringConversor::operator=(StringConversor const & rhs)
{
	this->_input = rhs.getInput();
	return *this;
}

std::ostream	& operator<<(std::ostream & o, StringConversor const & rhs)
{
	o << rhs.getInput();
	return o;
}

// Getters/Setters
void	StringConversor::setInput(std::string const & input)
{
	this->_input = input;
}

std::string	StringConversor::getInput() const
{
	return this->_input;
}

bool	StringConversor::specialCase(std::string const input)
{
	std::string floatLimits[] = {"+inff", "-inff", "nanf"};
	std::string doubleLimits[] = {"+inf", "-inf", "nan"};
	double		limitValues[] = {std::numeric_limits<double>::infinity(),
								-std::numeric_limits<double>::infinity(),
								 std::numeric_limits<double>::quiet_NaN()};
	for (int i(0); i < 3; i++)
	{
		if (input == floatLimits[i])
		{
			_type = FLOAT;
			_f = static_cast<float>(limitValues[i]);
			_d = limitValues[i];
			return (true);
		}
	}
	for (int i = 0; i < 3; i++)
	{
		if (input == doubleLimits[i])
		{
			_type = DOUBLE;
			_f = static_cast<float>(limitValues[i]);
			_d = limitValues[i];
			return (true);
		}
	}
	return (false);
}

// 1. Détecter le type du littéral passé en paramètre, 
bool	StringConversor::detectType(std::string const input)
{
	std::string::const_iterator it = input.begin();
	std::istringstream is(input);

	if (input.empty())
	{
		_type = UNKNOWN;
		return false;
	}
	if (input.length() == 1 && !std::isdigit(*it))
	{
		_type = CHAR;
		_c = *it;
		return true;
	}
	if (specialCase(input))
		return true;
	if (!std::isdigit(input.at(0)))
	{
		if (input.at(0) == '+' || input.at(0) == '-') 
			it++;
		else
		{
			_type = UNKNOWN;
			return false;
		}
	}
	int	digit = 0;
	int	point = 0;
	while (it != input.end() && std::isdigit(*it))
	{
		digit++;
		it++;
		if (it != input.end() && it + 1 != input.end() && *it == '.')
		{
			if (std::isdigit(*(it + 1)))
			{
				if (++point > 1)
				{
					_type = UNKNOWN;
					return false;
				}
			}
			it++;
		}
	}
	if (it == input.end() - 1 && *it == 'f' && digit > 0 && point == 1)
	{
		_type = FLOAT;
		is >> _f;//il faut enlever dernier char F
		return true;
	}
	if (it == input.end() && digit > 0)
	{
		if (point == 1)
		{
			_type = DOUBLE;
			is >> _d;
			return true;
		}
		if (point == 0)
		{
			_type = INT;
			is >> _i;
			return true;
		}
	}
	return (0);
}

// // 2. Le convertir de sa représentation sous forme de chaîne de caractères vers son véritable type
// void	StringConversor::convertString(std::string const input)
// {

// 	switch (_type)
// 	{
// 		case CHAR:


// 		case INT:
// 		case FLOAT:
// 		case DOUBLE:
// 	}
	
// }

// 3. ensuite le convertir explicitement vers les trois autres types de données.
// void	StringConversor::cast()
// {}

//48
void	StringConversor::printUnknown()
{
	std::cout << "char: Non displayable" << std::endl;
	std::cout << "int: Non displayable" << std::endl;
	std::cout << "float: Non displayable" << std::endl;
	std::cout << "double: Non displayable" << std::endl;
}

void	StringConversor::printChar()
{
	std::cout << "char: " << _c << std::endl;
	std::cout << "int: " << static_cast<int>(_c) << std::endl;
	std::cout << "float: " << static_cast<float>(_c) << std::endl;
	std::cout << "double: " << static_cast<double>(_c) << std::endl;
}
//convertPrintInt
void	StringConversor::printInt()
{
	if (_i >= CHAR_MIN && _i <= CHAR_MAX)
		std::cout << "char: " << static_cast<char>(_i)  << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
	std::cout << "int: " << _i << std::endl;
	std::cout << "float: " << static_cast<float>(_i) << std::endl;
	std::cout << "double: " << static_cast<double>(_i) << std::endl;
}

void	StringConversor::printFloat()
{
	if (_f == ceilf(_f) && _f >= CHAR_MIN && _f <= CHAR_MAX)
		std::cout << "char: " << static_cast<char>(_f)  << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
	if (_f != std::numeric_limits<double>::infinity() && _f != -std::numeric_limits<double>::infinity() 
	&& _f == std::numeric_limits<double>::quiet_NaN() && _f >= INT_MIN && _f <= INT_MAX)
		std::cout << "int: " << static_cast<int>(_f) << std::endl;
	else
		std::cout << "int: Non displayable" << std::endl;
	std::cout << "float: " << (_f) << std::endl;
	std::cout << "double: " << static_cast<double>(_f) << std::endl;
}

void	StringConversor::printDouble()
{
	if (_d == ceilf(_d) && _d >= CHAR_MIN && _d <= CHAR_MAX)
		std::cout << "char: " << static_cast<char>(_d)  << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
	if (_d != std::numeric_limits<double>::infinity() && _d != -std::numeric_limits<double>::infinity() 
	&& _d == std::numeric_limits<double>::quiet_NaN() && _d >= INT_MIN && _d <= INT_MAX)
		std::cout << "int: " << static_cast<int>(_d) << std::endl;
	else
		std::cout << "int: Non displayable" << std::endl;
	std::cout << "float: " << static_cast<float>(_d) << std::endl;
	std::cout << "double: " << _d << std::endl;
}

void	StringConversor::printAll()
{
	switch (_type)
	{
		case UNKNOWN:
			printUnknown();
		case CHAR:
			printChar();
		case INT:
			printInt();
		case FLOAT:
			printFloat();
		case DOUBLE:
			printDouble();
	}
}

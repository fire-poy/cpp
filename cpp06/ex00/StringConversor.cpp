#include "StringConversor.hpp"

StringConversor::StringConversor(std::string const & input) : _input(input)
{
	detectType(input);
}

StringConversor::StringConversor(StringConversor const & src)
{
	*this = src;
}

StringConversor::~StringConversor()
{
}

// operators
StringConversor &		StringConversor::operator=(StringConversor const & rhs)
{
	this->_input = rhs.getInput();
	this->_c = rhs._c;
	this->_i = rhs._i;
	this->_f = rhs._f;
	this->_d = rhs._d;
	return *this;
}

std::ostream	& operator<<(std::ostream & o, StringConversor const & rhs)
{
	o << rhs.getInput();
	return o;
}

void	StringConversor::setInput(std::string const & input)
{
	this->_input = input;
	detectType(input);
}

std::string	StringConversor::getInput() const
{
	return this->_input;
}

bool	StringConversor::isSpecialCase(std::string const input)
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
			return true;
		}
	}
	for (int i = 0; i < 3; i++)
	{
		if (input == doubleLimits[i])
		{
			_type = DOUBLE;
			_f = static_cast<float>(limitValues[i]);
			_d = limitValues[i];
			return true;
		}
	}
	return false;
}

bool	StringConversor::isNumberType(std::string const input)
{
	std::string::const_iterator it = input.begin();
	std::istringstream is(input);
	int	digit = 0;
	int	point = 0;

	if (!std::isdigit(input.at(0)))
	{
		if (input.at(0) == '+' || input.at(0) == '-') 
			it++;
		else
			return false;
	}
	while (it != input.end() && std::isdigit(*it))
	{
		digit++;
		it++;
		if (it != input.end() && it + 1 != input.end() && *it == '.')
		{
			if (std::isdigit(*(it + 1)))
			{
				if (++point > 1)
					return false;
			}
			it++;
		}
	}
	if (it == input.end() - 1 && *it == 'f' && digit > 0 && point == 1)
	{
		_type = FLOAT;
		is >> _f;
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
	return false;
}

void	StringConversor::detectType(std::string const input)
{
	if (input.empty())
		_type = UNKNOWN;
	else if (input.length() == 1 && !std::isdigit(input.at(0)))
	{
		_type = CHAR;
		_c = input.at(0);
	}
	else if (isSpecialCase(input))
		return;
	else if (isNumberType(input))
		return;
	else
		_type = UNKNOWN;
}

void	StringConversor::printFromUnknown()
{
	std::cerr << "Error: string is not a Char, Int, Float, or Double" << std::endl;
}

void	StringConversor::printFromChar()
{
	std::cout << "char: '" << _c << "'" << std::endl;
	
	std::cout << "int: " << static_cast<int>(_c) << std::endl;

	std::cout << std::fixed << std::setprecision(1);
	std::cout << "float: " << static_cast<float>(_c) << "f" << std::endl;
	
	std::cout << "double: " << static_cast<double>(_c) << std::endl;
}

void	StringConversor::printFromInt()
{
	if (_i < CHAR_MIN || _i > CHAR_MAX)
		std::cout << "char: impossible" << std::endl;
	else if (_i < 32 || _i > 126)
		std::cout << "char: Non displayable" << std::endl;
	else		
		std::cout << "char: '" << static_cast<char>(_i) << "'" << std::endl;

	std::cout << "int: " << _i << std::endl;

	std::cout << std::fixed << std::setprecision(1);
	std::cout << "float: " << static_cast<float>(_i) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(_i) << std::endl;
}

void	StringConversor::printFromFloat()
{
	if (_f != ceilf(_f) || _f < CHAR_MIN || _f > CHAR_MAX)
		std::cout << "char: impossible" << std::endl;
	else if (_f < 32 || _f > 126)
		std::cout << "char: Non displayable" << std::endl;
	else		
		std::cout << "char: '" << static_cast<char>(_f) << "'" << std::endl;

	if (_f != std::numeric_limits<double>::infinity() && _f != -std::numeric_limits<double>::infinity() 
	&& _f != std::numeric_limits<double>::quiet_NaN() && _f >= INT_MIN && _f <= INT_MAX)
		std::cout << "int: " << static_cast<int>(_f) << std::endl;
	else
		std::cout << "int: impossible" << std::endl;

	if (ceil(_f) == _f)
		std::cout << std::fixed << std::setprecision(1);
	std::cout << "float: " << (_f) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(_f) << std::endl;
}

void	StringConversor::printFromDouble()
{
	if (_d != ceilf(_d) || _d < CHAR_MIN || _d > CHAR_MAX)
		std::cout << "char: impossible" << std::endl;
	else if (_d < 32 || _d > 126)
		std::cout << "char: Non displayable" << std::endl;
	else		
		std::cout << "char: '" << static_cast<char>(_d) << "'" << std::endl;
	
	if (_d != std::numeric_limits<double>::infinity() && _d != -std::numeric_limits<double>::infinity() 
	&& _d != std::numeric_limits<double>::quiet_NaN() && _d >= INT_MIN && _d <= INT_MAX)
		std::cout << "int: " << static_cast<int>(_d) << std::endl;
	else
		std::cout << "int: impossible" << std::endl;

	if (ceil(_d) == _d)
			std::cout << std::fixed << std::setprecision(1);
	std::cout << "float: " << static_cast<float>(_d) << "f" << std::endl;
	std::cout << "double: " << _d << std::endl;
}

void	StringConversor::printAll()
{
	switch (_type)
	{
		case UNKNOWN:
			printFromUnknown();
			break;
		case CHAR:
			printFromChar();
			break;
		case INT:
			printFromInt();
			break;
		case FLOAT:
			printFromFloat();
			break;
		case DOUBLE:
			printFromDouble();
			break;
		default:
			break;
	}
}
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
	StringConversor::specialCase(std::string input);
	StringConversor::convertString(input);
	StringConversor::detectConvertType(std::string const input);
	

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
	// o << rhs.getInput();
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
			// _c = 0;
			// _i = 0;
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
void	StringConversor::detectConvertType(std::string const input)
{
	std::istringstream s(input);
	
	if (input.empty())
	{
		_type = UNKNOWN;
		return false;
	}
	if (input.length() == 1 && !std::isdigit(input.at(0))
	{
		_type = CHAR;
		_c = input.at(0);
		return true;
	}
	if (specialCase(input))
		return true;
	if (!std::isdigit(input.at(i)))
	{
		if (input.at(0) == '+' || input.at(0) == '-') 
			i++;
		else
		{
			_source = UNKNOWN;
			return false;
		}
	}
	int	i = 0;
	int	digit = 0;
	int	point = 0;
	while (std::isdigit(input.at(i))
	{
		digit++;
		i++;
		if (input.at(i) && input.at(i) == '.' && std::isdigit(input.at(i + 1)))
		{
			if (++point > 1)
			{
				_source = UNKNOWN;
				return false;
			}
			i++;
		}
	}
	if (input.at(i) == input.end() && input.at(i) == 'f' && digit > 0 && point == 1)
	{
		_source = FLOAT;
		return true;
	}
	if (input.at(i) == std::string::npos && digit > 0 && point == 1)
	{
		_source = DOUBLE;
		return true;
	}
	if (input.at(i) == std::string::npos && digit > 0 && point == 0)
	{
		_source = INT;
		return true;
	}
	return (0);
	// dot_point != std::string::npos
	// for (i = input.begin(); i != input.end(); i++)
}

}

2. Le convertir de sa représentation sous forme de chaîne de caractères vers son véritable type
void	StringConversor::convertString()
{

}

3. ensuite le convertir explicitement vers les trois autres types de données.
void	StringConversor::castToOtherTypes()

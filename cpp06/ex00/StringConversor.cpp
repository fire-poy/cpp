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
		convertString();
		cast();
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
bool	StringConversor::detectType(std::string const input)
{
	// std::istringstream s(input);
	
	if (input.empty())
	{
		_type = UNKNOWN;
		return false;
	}
	if (input.length() == 1 && !std::isdigit(input.at(0)))
	{
		_type = CHAR;
		_c = input.at(0);
		return true;
	}
	if (specialCase(input))
		return true;
	int	i = 0;
	if (!std::isdigit(input.at(0)))
	{
		if (input.at(0) == '+' || input.at(0) == '-') 
			i++;
		else
		{
			_type = UNKNOWN;
			return false;
		}
	}
	int	digit = 0;
	int	point = 0;
	while (std::isdigit(input.at(i)))
	{
		digit++;
		i++;
		if (input.at(i) && input.at(i) == '.' && std::isdigit(input.at(i + 1)))
		{
			if (++point > 1)
			{
				_type = UNKNOWN;
				return false;
			}
			i++;
		}
	}
	if (i == input.end() && input.at(i) == 'f' && digit > 0 && point == 1)
	// if (input.at(i) == input.end() && input.at(i) == 'f' && digit > 0 && point == 1)
	{
		_type = FLOAT;
		return true;
	}
	if (input.at(i) == std::string::npos && digit > 0 && point == 1)
	{
		_type = DOUBLE;
		return true;
	}
	if (input.at(i) == std::string::npos && digit > 0 && point == 0)
	{
		_type = INT;
		return true;
	}
	return (0);
	// dot_point != std::string::npos
	// for (i = input.begin(); i != input.end(); i++)
}

// 2. Le convertir de sa représentation sous forme de chaîne de caractères vers son véritable type
void	StringConversor::convertString()
{
	std::cout << _type << '\n';
}

// 3. ensuite le convertir explicitement vers les trois autres types de données.
void	StringConversor::cast()
{}

void	StringConversor::printAll()
{}

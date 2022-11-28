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
		if (!input.compare(floatLimits[i]))
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
		if (!input.compare(doubleLimits[i])
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
	// int	i = input.begin();
	// int	j = 0;
	// for (i = input.begin(); i != input.end(); i++)
	// {
	// 	if (!std::isdigit(input.at(i)))
	// 	{
	// 		if (input.at(i) == '+' || input.at(i) == '-') 
	// 			i++;
	// 		else
	// 		{
	// 			_source = UNKNOWN;
	// 			return false;
	// 		}
	// 	}
	// 	if (std::isdigit(input.at(i)))
	// 	{
	// 		i++;
	// 		j++;
	// 		if (input.at(i) && input.at(i) == '.' && std::isdigit(input.at(i + 1)))
	// 		{
	// 			if (++point > 1)
	// 				return (0);
	// 			i++;
	// 		}
	// 	}
	if (specialCase(input))
		return;

}

2. Le convertir de sa représentation sous forme de chaîne de caractères vers son véritable type
void	StringConversor::convertString()
{

}

3. ensuite le convertir explicitement vers les trois autres types de données.
void	StringConversor::castToOtherTypes()

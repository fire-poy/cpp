#include "Fixed.hpp"

void	Fixed::setVerbose(bool value)
{
	Fixed::_verbose = value;
}

bool	Fixed::getVerbose(void) const
{
	return Fixed::_verbose;
}

void	Fixed::setRawBits (int const raw)
{
	this->_rawBits = raw;
}

int		Fixed::getRawBits(void) const
{
	return this->_rawBits;
}

// float = n / 256 = 8 bitshift a droite -> cast en float y bitshift a droite
float	Fixed::toFloat(void) const
{
	int		bitShift = this->pow(2, this->_fractionalBits);
	float	ret = (float)this->_rawBits / bitShift;

	return ret;
}

int		Fixed::toInt(void) const
{
	return (this->_rawBits >> this->_fractionalBits);
}

int		Fixed::pow(int nb, int power) const
{
	int	ret = nb;

	if (power == 0)
		return (1);
	if (power < 0)
		power = -power;
	while (power > 1)
	{
		ret *= nb;
		power--;
	}
	return (ret);
}
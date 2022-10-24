#include "Fixed.hpp"

// Getters/Setters
int		Fixed::getRawBits(void) const
{
	return this->_rawBits;
}

void	Fixed::setRawBits (int const raw)
{
	this->_rawBits = raw;
}

float	Fixed::toFloat(void) const
{
	int		power = pow(2, this->_number_of_fractional_bits);
	float	result = (float)this->_fixed_point_value / power;

	return (result);
	float ret;
	float integer;
    // 10000000 = -248654654654
    // 11111111 = -1
	0.11000000 = 0.75 = 2^-1 + 2^-2 = 1/2 + 1/4 = 0.5 + 0.25

	11001010
	11001010
	11001010
	10010000 / 2
	conseguir fractional value;

	integer = this->toInt();
	integer += 


// while
	ret = pow(2, -1);
	ret = pow(2, -2);


	= 0.75 + 1;
	return 0;
}

int		Fixed::toInt(void) const
{
	return this->_rawBits >> 8;
	// return (this->_fixed_point_value >> this->_number_of_fractional_bits);
}






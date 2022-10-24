#include <cmath>
#include "Fixxed.hpp"

Fixed::Fixed( void ): _fixed_point_value(0)
{
	return;
}

Fixed::Fixed( const int value )
{
	this->_fixed_point_value = value << this->_number_of_fractional_bits;//int no hay nada despues de la coma asi que da igual si agrega ceros
	return;
}

//  Similarly, shifting a number to the left by 1 bit multiplies the number by 2.
Fixed::Fixed( const float value )
{
	int shift = pow(2, this->_number_of_fractional_bits);//como hay bits despues de la coma, multiplica por 2 para guardarlos 
	this->_fixed_point_value = roundf(value * shift);// 2^8 = 256 -> 8 bitshift a gauche -> 3.12345678 * 256 -> 799.60493568 -> redondeado 800
	return;
}

Fixed::Fixed( Fixed const & src )
{
	*this = src;
	return;
}

Fixed::~Fixed( void )
{
	return;
}

Fixed &	Fixed::operator=( Fixed const & rhs )
{
	if (this != &rhs)
		this->_fixed_point_value = rhs._fixed_point_value;
	return *this;
}

int	Fixed::toInt( void ) const
{
	return (this->_fixed_point_value >> this->_number_of_fractional_bits);// lo vuelve donde estaba
}

float	Fixed::toFloat( void ) const
{
	int		shift = pow(2, this->_number_of_fractional_bits);
	float	result = (float)this->_fixed_point_value / shift;// float = n / 256 = 8 bitshift a droite -> revierte tratamiento y cast

	return (result);
}

int	Fixed::getRawBits( void ) const
{
	return (this->_fixed_point_value);
}

void	Fixed::setRawBits( const int raw )
{
	this->_fixed_point_value = raw;
}

void	Fixed::setVerbose( bool value )
{
	Fixed::_verbose = value;
}

bool	Fixed::getVerbose( void )
{
	return (Fixed::_verbose);
}

bool	Fixed::_verbose = false;

std::ostream &	operator<<( std::ostream & ostr, Fixed const & instance)
{
	ostr << instance.toFloat();
	return (ostr);
}
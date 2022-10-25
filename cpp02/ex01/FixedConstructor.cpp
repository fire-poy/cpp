#include "Fixed.hpp"

const int	Fixed::_fractionalBits = 8;
bool		Fixed::_verbose = true;

Fixed::Fixed(void): _rawBits(0)
{
	if (Fixed::_verbose)
		std::cout << "Default Constructor called" << std::endl;
}

Fixed::Fixed(Fixed const & src)
{
	if (Fixed::_verbose)
		std::cout << "Copy Constructor called" << std::endl;
	*this = src;
}

// It converts n to the corresponding fixed-point value. 
Fixed::Fixed(int const n)
{
	if (Fixed::_verbose)
		std::cout << "Int Constructor called" << std::endl;
	this->_rawBits = n << this->_fractionalBits;
	return;
}

// It converts f to the corresponding fixed-point value.
Fixed::Fixed(float const f)
{
	if (Fixed::_verbose)
		std::cout << "Float Constructor called" << std::endl;
	
	int	bitShift = this->pow(2, this->_fractionalBits);
	int	final = roundf(f * bitShift);
	this->setRawBits(final);
	return;
}

Fixed::~Fixed()
{
	if (Fixed::_verbose)
		std::cout << "Destructor called" << std::endl;
}
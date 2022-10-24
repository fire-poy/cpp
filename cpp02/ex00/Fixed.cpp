#include "Fixed.hpp"

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->_rawBits;
}

void	Fixed::setRawBits (int const raw)
{
	this->_rawBits = raw;
}

Fixed::Fixed(void): _rawBits(0)
{
	std::cout << "Default Constructor called" << std::endl;
}

Fixed::Fixed(Fixed const & src)
{
	std::cout << "Copy Constructor called" << std::endl;
	*this = src;
}

Fixed &		Fixed::operator=(Fixed const & rhs)
{
	std::cout << "Assignment operator called" << std::endl;
	if (this != &rhs)
		this->_rawBits = rhs.getRawBits();
	return *this;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

std::ostream	& operator<<(std::ostream & o, Fixed const & rhs)
{
	o << rhs.getRawBits();
	return o;
}

const int Fixed::_fractionalBits = 8;

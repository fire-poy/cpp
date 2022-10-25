#include "Fixed.hpp"

Fixed	&Fixed::operator=(Fixed const & rhs)
{
	if (Fixed::_verbose)
		std::cout << "Assignment operator called" << std::endl;
	if (this != &rhs)
		this->_rawBits = rhs.getRawBits();
	return *this;
}

bool	Fixed::operator>(Fixed const & rhs) const
{
	return (this->_rawBits > rhs.getRawBits());
	// return (this->getRawBits() > rhs.getRawBits());
}

bool	Fixed::operator<(Fixed const & rhs) const 
{
	return (this->_rawBits < rhs.getRawBits());
	// return (this->getRawBits() < rhs.getRawBits());
}

bool	Fixed::operator>=(Fixed const & rhs) const
{
	return (this->_rawBits >= rhs.getRawBits());
}

bool	Fixed::operator<=(Fixed const & rhs) const
{
	return (this->_rawBits <= rhs.getRawBits());
}

bool	Fixed::operator==(Fixed const & rhs) const
{
	return (this->_rawBits == rhs.getRawBits());
}

bool	Fixed::operator!=(Fixed const & rhs) const
{
	return (this->_rawBits != rhs.getRawBits());
}

// Fixed	Fixed::operator+(Fixed const & rhs) const
Fixed	Fixed::operator+(Fixed const & rhs) const
{
	Fixed ret;

	ret.setRawBits(this->_rawBits + rhs.getRawBits());
	return ret;
} 

Fixed	Fixed::operator-(Fixed const & rhs) const
{
	Fixed ret;

	ret.setRawBits(this->_rawBits - rhs.getRawBits());
	return ret;
} 

Fixed	Fixed::operator*(Fixed const & rhs) const
{
	return (Fixed(this->toFloat() * rhs.toFloat()));
} 

Fixed	Fixed::operator/(Fixed const & rhs) const
{
	return (Fixed(this->toFloat() / rhs.toFloat()));
} 


Fixed	&Fixed::operator++(void)
{
	this->_rawBits++;
	return *this;
}

// postfix
Fixed	Fixed::operator++(int)
{
	Fixed temp = *this;
	++*this;
	return temp;
}

Fixed	&Fixed::operator--(void)
{
	this->_rawBits--;
	return *this;
}

Fixed	Fixed::operator--(int)
{
	Fixed temp = *this;
	--*this;
	return temp;
}

std::ostream	&operator<<(std::ostream & o, Fixed const & rhs)
{
	o << rhs.toFloat();
	return o;
}
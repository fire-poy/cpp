#include "Fixed.hpp"

Fixed &		Fixed::operator=(Fixed const & rhs)
{
	if (this != &rhs)
		this->_rawBits = rhs.getRawBits();
	std::cout << "(" << this << ") Assign called, Fixed (" << &rhs << ") copied" << std::endl;
	// std::cout << "Copy assignment operator called" << std::endl;
	return *this;
}

std::ostream	& operator<<(std::ostream & o, Fixed const & rhs)
{
	int	print;

	print = rhs.getRawBits();
	print = print >> 8;
	o << print;
	return o;
}
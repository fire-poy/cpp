#include "Fixed.hpp"

Fixed &		Fixed::operator=(Fixed const & rhs)
{
	if (Fixed::_verbose)
		std::cout << "Assignment operator called" << std::endl;
	if (this != &rhs)
		this->_rawBits = rhs.getRawBits();
	return *this;
}

std::ostream	& operator<<(std::ostream & o, Fixed const & rhs)
{
	o << rhs.toFloat();
	return o;
}
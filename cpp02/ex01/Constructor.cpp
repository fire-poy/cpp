#include "Fixed.hpp"

//8 bits despues de la coma -> 0101010.11101010
// integer = 4bytes = 32 bits -> 24 entero, 8 fraccion 2^-8
const int Fixed::_fractionalBits = 8;

Fixed::Fixed(void): _rawBits(0)
{
	std::cout << "(" << this << ") Default Constructor called" << std::endl;
}

Fixed::Fixed(Fixed const & src)
{
	*this = src;
	std::cout << "(" << this << ") Copy Constructor called" << std::endl;
}

// It converts it to the corresponding fixed-point value. 
// The fractional bits value is initialized to 8
Fixed::Fixed(int const n)
{
	this->_rawBits = n << 8;
	if (n < 0)
		this->_rawBits += 255;
	std::cout << "(" << this << ") Int Constructor called" << std::endl;
	return;
	// n = 4 -> 32 bits - 3 = 29 bits con Ceros -> 
	// 00000000
	// 00000000
	// 00000000
	// 00000100

	// fixed_point_number -> bitswifting 8 a la izquierda
	// 00000000
	// 00000000
	// 00000100
	// 00000000

	// negativos a la derecha llena de 1 y no de 0	
	// n = -4 -> 32 bits - 3 = 29 bits con 1 -> 
	// 11111111
	// 11111111
	// 11111111
	// 11111100


	// fixed_point_number -> bitswifting 8 a la izquierda
	// 11111111
	// 11111111
	// 11111100
	// 00000000 + 255?
}
	// int	i = -1;
	// while (++i < this->_fractionalBits)
		// n<<

// It converts it to the corresponding fixed-point value.
// The fractional bits value is initialized to 8
Fixed::Fixed(float const n)
{
	this->setRawBits(n);
	std::cout << "(" << this << ") Float Constructor called" << std::endl;
	return;
}

Fixed::~Fixed()
{
	std::cout << "(" << this << ") Destructor called" << std::endl;
}
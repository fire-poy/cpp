#include <iostream>
#include <cmath>
#include "Fixxed.hpp"
// #include <bitset> 
// #include "Fixed.hpp"

int	main(void)
{
	Fixed		a;
	Fixed const	b(10);
	Fixed const	c(42.42f);
	Fixed const	d(b);

	// a.setVerbose(1);
	// b.setVerbose(1);
	// c.setVerbose(1);
	// d.setVerbose(1);
	a = Fixed(1234.4321f);

	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;
	
	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	
	#define MAX_INT32 2147483647
	#define MIN_INT32 12632256
	// a = Fixed(-5);
	// a = Fixed(MAX_INT32);
	a = Fixed(MIN_INT32);
	std::cout << "a is " << a << std::endl;
	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	a = Fixed(-5.7f);
	std::cout << "a is " << a << std::endl;
	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	a = Fixed(-5);
	std::cout << "a is " << a << std::endl;
	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	a = Fixed(-5.3456197865422110f);
	std::cout << "a is " << a << std::endl;
	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	a = Fixed(3.5f);
	std::cout << "a is " << a << std::endl;
	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	a = Fixed(0.00346486f);
	std::cout << "a is " << a << std::endl;
	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	return 0;
}
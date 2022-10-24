#include <iostream>
#include "Sample.class.hpp"

Sample::Sample(void) : _foo(0)
{
	std::cout << "Default Constructor called" << std::endl;
	return;
}

Sample::Sample(int const n) : _foo(n)
{
	std::cout << "Parametric Constructor called" << std::endl;
	return;
}

Sample::Sample(Sample const & src)
{
	std::cout << "Copy Constructor called" << std::endl;
	*this = src;
	return;
}



Sample::~Sample(void)
{
	std::cout << "Destructor called" << std::endl;
	return;
}

int	Sample::getFoo(void) const
{
	return this->_foo;
}

Sample &	Sample::operator=(Sample const & rhs)
{
	std::cout << "Assignment operator called" << std::endl;

	if (this != &rhs)
		this->_foo = rhs.getFoo();

	return *this;
}

void	Sample::bar(char const c) const
{
	std::cout << "Member function bar called whit char overload: " << c << std::endl;
}

void	Sample::bar(int const n) const
{
	std::cout << "Member function bar called whit int overload: " << n << std::endl;
}

void	Sample::bar(float const f) const
{
	std::cout << "Member function bar called whit float overload: " << f << std::endl;
}

void	Sample::bar(Sample const & i) const
{
	(void)i;
	std::cout << "Member function bar called whit Sample class overload" << std::endl;
}

std::ostream &	operator <<(std::ostream & o, Sample const & i)
{
	o << "the valu of _foo is : " << i.getFoo();

	return o;
}
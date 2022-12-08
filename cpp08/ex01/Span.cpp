#include "Span.hpp"
#include <stdexcept>
#include <cstdlib>
#include <algorithm>

Span::Span()
{
}

Span::Span(unsigned int const n) : _size(n), _v(0)
{
}

Span::Span(Span const & src)
{
	*this = src;
}

Span & Span::operator=(Span const & rhs)
{
	if (this == &rhs)
		return *this;
	this->_size = rhs.size();
	this->_v = rhs._v;
	return *this;
}

Span::~Span()
{
}

size_t	Span::size() const
{
	return this->_size;
}

void	Span::addNumber(int a)
{
	if (_v.size() >= _size)
		throw std::out_of_range("Max size reached");
	_v.push_back(a);
}

int		Span::shortestSpan() const
{
	int							delta;
	int							tmp;
	std::vector<int>::iterator	it;

	if (_v.size() <= 1)
		throw std::logic_error("Inssuficient elemnts in Span");
	delta = _v[1] - _v[0];
	for(std::vector<int>::const_iterator it(_v.begin() + 1); it != _v.end(); it++)
	{
		tmp = *it - *(it - 1);
		if (std::abs(tmp) < std::abs(delta))
			delta = tmp;
	}
	return delta;
}

int		Span::longestSpan() const
{
	int					delta;
	std::vector<int>	tmp = this->_v;		

	if (_v.size() <= 1)
		throw std::logic_error("Inssuficient elemnts in Span");
	std::sort(tmp.begin(), tmp.end());
	delta = tmp[tmp.size() - 1] - tmp[0];
	return delta;
}

std::vector<int> &	Span::getVect()
{
	return this->_v;
}  


std::ostream	& operator<<(std::ostream & o, Span const & rhs)
{
	o << "Span size = " << rhs.size();
	return o;
}
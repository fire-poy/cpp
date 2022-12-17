#ifndef SPAN_HPP
# define SPAN_HPP

# include <vector>
# include <iostream>

class Span
{
	private:
		size_t				_size;
		std::vector<int>	_v;
		Span();

	public:

		Span(unsigned int const n);
		Span(Span const & src);
		Span & operator=(Span const & rhs);
		~Span();

		size_t	size() const;
		void	addNumber(int a);
		template <class T>
		void	addFromContainer(const T &begin, const T &end);
		int		shortestSpan() const;
		int		longestSpan() const;  
		std::vector<int> &	getVect();  
};

	template <class T>
	void	Span::addFromContainer(const T &begin, const T &end)
	{
		if (static_cast<unsigned int>(std::distance(begin, end)) > (_size - _v.size()))
			throw(std::logic_error("Max size reached"));
		std::copy(begin, end, std::back_inserter(_v));
	}


std::ostream	& operator<<(std::ostream & o, Span const & inst);

#endif

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# define RESET "\033[0m"
# define RED "\033[31m"
# define GREEN "\033[32m"
# define YELLOW "\033[33m"
# define BLUE "\033[34m" 
# define MAGENTA "\033[35m"
# define CYAN "\033[36m" 

# include <stack>
# include <iostream>

template<typename T>
class MutantStack: public std::stack<T>
{
	public:

		MutantStack<T>() {}
		MutantStack<T>(const MutantStack<T> &src)
		{
			*this = src;
		}
		MutantStack<T>	&operator=(const MutantStack<T> &rhs)
		{
			std::stack<T>::operator=(rhs);
		}
		~MutantStack<T>() {}
		
		typedef typename std::stack<T>::container_type::iterator				iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator		reverse_iterator;
		typedef typename std::stack<T>::container_type::const_iterator			const_iterator;
		typedef typename std::stack<T>::container_type::const_reverse_iterator	const_reverse_iterator;
		
		iterator	begin()
		{
			return this->c.begin();
		}
		iterator	end()
		{
			return this->c.end();
		}

		reverse_iterator	rbegin()
		{
			return this->c.rbegin();
		}
		reverse_iterator	rend()
		{
			return this->c.rend();
		}

		const_iterator	begin() const
		{
			return this->c.begin();
		}
		const_iterator	end() const
		{
			return this->c.end();
		}

		const_reverse_iterator	rbegin() const
		{
			return this->c.rbegin();
		}
		const_reverse_iterator	rend() const
		{
			return this->c.rend();
		}
};

#endif
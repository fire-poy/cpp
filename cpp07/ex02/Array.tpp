#ifndef ARRAY_TPP
# define ARRAY_TPP

# include <iostream>

template<typename T = int>
class Array
{
	private:

		size_t		_size;
		T			*_array;
	
	public:
		
//crée un array de n éléments initialisés par défaut.
//  Vous DEVEZ utiliser l’opérateur new[] pour allouer de la mémoire. 
// Toute allocation préventive (c’est-à-dire allouer de la mémoire en avance) est interdite. 
// Votre programme ne doit pas pouvoir accéder à une zone non allouée.
// cree array de n element initialises par default
		Array<T>(unsigned int const n = 0) : _size(n)
		{
			this->_array = new T[n];
			// this->_array = new T[n]();
		}
		
		Array<T>(Array const & src) : _array(NULL)
		{
			*this = src;
		}
		
		Array<T> &	operator=(Array const & rhs)
		{
			if (this->_array)
				delete [] this->_array;
			this->_size = rhs.size();
			this->_array = new T[_size];
			for (size_t i(0); i < _size; i++)
				this->_array[i] = rhs[i];
			return *this;
		}
		
		T	&		operator[](unsigned int i)
		{
			if (i < 0 || i >= this->_size)
				throw OutofScopeException();
			return this->_array[i];
		}

		const T	&		operator[](unsigned int i) const
		{
			if (i < 0 || i >= this->_size)
				throw OutofScopeException();
			return this->_array[i];
		}
		
		~Array<T>()
		{
			if (this->_array)
				delete [] this->_array;
		}

		//return n d'element de l'array. ne modifie pas l'instance courrante
		size_t	size() const
		{
			return this->_size;
		}

		class OutofScopeException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return "Tab accesor is out of scope";
				}
		};
};

template<typename T>
std::ostream	& operator<<(std::ostream & o, Array<T> const & rhs)
{
	o << rhs.size();
	return o;
}

#endif

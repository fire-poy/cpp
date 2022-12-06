#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template<typename T>
class Array
{
	public:
	
		Array(unsigned int const n = 0);//crée un array de n éléments initialisés par défaut.
		Array(Array const & src);
		Array	& operator=(Array const & rhs);
		T		& operator[](unsigned int n);
		const T & operator[](unsigned int n) const;
		~Array();

		T 		& getArray();
		void	size();//return n d'element de l'array . ne modifie pas l'instance courrante

		class GradeOutofScopeException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return "Tab accesor is out of scope";
				}
		};

	private:

		size_t		_size;
		T			*_array;
};

template<typename T>
std::ostream	& operator<<(std::ostream & o, Array<T> const & inst);


//  Vous DEVEZ utiliser l’opérateur new[] pour allouer de la mémoire. 
// Toute allocation préventive (c’est-à-dire allouer de la mémoire en avance) est interdite. 
// Votre programme ne doit pas pouvoir accéder à une zone non allouée.
// cree array de n element initialises par default
template<typename T>
Array::Array(unsigned int const n) : _size(n)
{
	this->_array = new T[n] = NULL;
}

template<typename T>
Array::Array(Array const & src)
{
	*this = src;
}

template<typename T>
Array::~Array()
{
	delete [] this->_array;
}

// operators
template<typename T>
Array &		Array::operator=(Array const & rhs)
{
	this->_size = rhs.size();
	if (this->_array)
		delete [] this->_array;
	this->_array = new T[_size];
	for (int i(0); i < _size; i++)
		this->_array[i] = rhs.getArray[i];
	return *this;
}

//  En cas d’index invalide lors d’une tentative d’accès d’un élément en 
// utilisant l’opérateur[ ], une std::exception est jetée.
template<typename T>
T	&Array::operator[](unsigned int i)
{
	try
	{
		if (i < 0 || i >= this->size)
			throw std::exception;
		return this->_array[i];
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

template<typename T>
const T	&Array::operator[](unsigned int i) const
{
	try
	{
		if (i < 0 || i >= this->size)
			throw std::exception;
		return this->_array[i];
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

template<typename T>
std::ostream	& operator<<(std::ostream & o, Array const & rhs)
{
	o << rhs.size();
	return o;
}

//return n d'element de l'array . ne modifie pas l'instance courrante
template<typename T>
size_t	Array::size()
{
	return this->_size;
}

template<typename T>
T 		& Array::getArray();
{
	return this->_array;
}

#endif
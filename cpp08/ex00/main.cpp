#include "easyfind.hpp"
#include <vector>
#include <list>
#include <iostream>
#include <algorithm>

void	displayInt(int i)
{
	std::cout << i << std::endl;
}

int	main()
{
	std::list<int>	l;
	int				n = 7;

	for (int i(0); i < 10; i += 2)
		l.push_back(i);
	for_each(l.begin(), l.end(), displayInt);

	std::list<int>::iterator it;
	it = std::find(l.begin(), l.end(), n);
	if (it == l.end())
		std::cout << "n: " << n << " not founded | " << *it << std::endl;
	else 
		std::cout << "n: " << n << " founded | " << *it << std::endl;

	std::cout << std::endl;
	n = 10;
	std::list<int>::iterator i;
	i = easyfind(l, n);		
	if (i == l.end())
		std::cout << "n: " << n << " not founded | " << *i << std::endl;
	else 
		std::cout << "n: " << n << " founded | " << *i << std::endl;

	n = 2;
	i = easyfind(l, n);		
	if (i == l.end())
		std::cout << "n: " << n << " not founded | " << *i << std::endl;
	else 
		std::cout << "n: " << n << " founded | " << *i << std::endl;
	std::cout << std::endl;
	n = 8;

	std::vector<int> v(2,1);

	v.push_back(5);
	v.push_back(40);
	v.push_back(9);
	for_each(v.begin(), v.end(), displayInt);
	
	std::vector<int>::iterator j;
	j = std::find(v.begin(), v.end(), n);
	if (j == v.end())
		std::cout << "n: " << n << " not founded " << *j << std::endl;
	else 
		std::cout << "n: " << n << " founded " << *j << std::endl;

	std::cout << std::endl;
	j = v.begin();
	j = easyfind<std::vector<int> >(v, n);		
	if (j == v.end())
		std::cout << "n: " << n << " not founded " << *j << std::endl;
	else 
		std::cout << "n: " << n << " founded " << *j << std::endl;
}

// int	main( void )
// {
// 	std::vector<int>			vect;
// 	std::vector<int>::iterator	it;

// 	for (int i = 1; i < 59; i += 2)
// 		vect.push_back(i);
// 	it = easyfind(vect, 43);
// 	if (it == vect.end())
// 		std::cout << "iterator reached the end of container" << std::endl;
// 	else
// 		std::cout << "iterator: " << *it << std::endl;
// 	// displayIterator(it, vect.end());
// 	it = easyfind(vect, 42);
// 	// displayIterator(it, vect.end());
// 	if (it == vect.end())
// 		std::cout << "iterator reached the end of container" << std::endl;
// 	else
// 		std::cout << "iterator: " << *it << std::endl;
// }

#include <vector>
#include <list>
#include <iostream>
#include <algorithm>
#include "Span.hpp"

void	displayInt(int i)
{
	std::cout << i << std::endl;
}

// Testez votre Span avec au moins 10 000 nombres.
int main()  
{  
	Span sp = Span(5);  
	sp.addNumber(6);  
	sp.addNumber(3);  
	sp.addNumber(17);  
	sp.addNumber(9);  
	sp.addNumber(11);  
	std::cout << sp.shortestSpan() << std::endl;  
	std::cout << sp.longestSpan() << std::endl << std::endl;  

	std::vector<int>			vect = sp.getVect();
	for_each(vect.begin(), vect.end(), displayInt);


	std::cout << "----------- Big test -------------" << std::endl;
	{
		const unsigned int size = 20000;
		const unsigned int n_max = 2e9;
		Span sp = Span(size);
		std::vector<int> vec;

		for (size_t i = 0; i < size + 1; i++)
		{
			vec.push_back(rand() % n_max);
		}
		// Trying to add too much elements
		try
		{
			sp.addFromContainer(vec.begin(), vec.end());
			std::cout << sp.shortestSpan() << std::endl; std::cout << sp.longestSpan() << std::endl;
		}
		catch (const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
		try
		{
			sp.addFromContainer(vec.begin(), vec.end() - 1);
			std::cout << sp.shortestSpan() << std::endl; std::cout << sp.longestSpan() << std::endl;
		}
		catch (const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	return 0;  
}  
// 	std::vector<int>			vect;
// 	std::vector<int>::iterator	it;
// / 	for (int i = 1; i < 59; i += 2)
//  		vect.push_back(i);
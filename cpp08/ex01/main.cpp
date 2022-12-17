#include <vector>
#include <list>
#include <iostream>
#include <algorithm>
#include "Span.hpp"

void	displayInt(int i)
{
	std::cout << i << std::endl;
}

int main()  
{  
	Span sp_a = Span(5);  

	std::cout << "\n\033[0;31m" << "Small test" << "\n\033[0;0m\n";

	sp_a.addNumber(6);  
	sp_a.addNumber(10);  
	sp_a.addNumber(17);  
	sp_a.addNumber(4);  
	sp_a.addNumber(11);  
	std::cout << sp_a.shortestSpan() << std::endl;  
	std::cout << sp_a.longestSpan() << std::endl << std::endl;  

	std::vector<int>			vect = sp_a.getVect();
	for_each(vect.begin(), vect.end(), displayInt);


	const unsigned int	size = 30000;
	const unsigned int	rdm = 2e8;
	std::vector<int> 	vec;
	
	Span sp_b = Span(size);

	for (size_t i = 0; i < size + 1; i++)//remplisage vecteur
	{
		vec.push_back(rand() % rdm);
	}

	std::cout << "\n\033[0;31m" << "Add to many numbers" << "\n\033[0;0m\n";
	try
	{
		sp_b.addFromContainer(vec.begin(), vec.end());
		std::cout << sp_b.shortestSpan() << std::endl;
		std::cout << sp_b.longestSpan() << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	
	// Testez votre Span avec au moins 10 000 nombres.
	std::cout << "\n\033[0;31m" << "Big test" << "\n\033[0;0m\n";
	try
	{
		// sp_b.addNumber(6);  
		sp_b.addFromContainer(vec.begin(), vec.end() - 1);
		std::cout << sp_b.shortestSpan() << std::endl; 
		std::cout << sp_b.longestSpan() << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	return 0;  
}  

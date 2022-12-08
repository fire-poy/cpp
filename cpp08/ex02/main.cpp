#include "MutantStack.hpp"
#include <iostream>

// int main()
// {
// 	MutantStack<int> mstack;
// 	mstack.push(5);
// 	mstack.push(17);
// 	std::cout << "top = " << mstack.top() << std::endl;
// 	mstack.pop();
// 	std::cout << "size = " << mstack.size() << std::endl;
// 	mstack.push(3);
// 	mstack.push(5);
// 	mstack.push(737);
// 	//[...]
// 	mstack.push(0);
// 	MutantStack<int>::iterator it = mstack.begin();
// 	MutantStack<int>::iterator ite = mstack.end();
// 	++it;
// 	--it;
// 	while (it != ite)
// 	{
// 	std::cout << *it << std::endl;
// 	++it;
// 	}
// 	std::stack<int> s(mstack);
// 	return 0;
// }

void	const_iteration(const MutantStack<int> &m)
{
	std::cout << GREEN << "Const Iterator\n\n";
	for (MutantStack<int>::const_iterator it(m.begin()); it < m.end(); it++)
	{
		std::cout << *it << std::endl;
		// *it += 10;
	}
	std::cout << "\n" << YELLOW << "Const Reverse\n\n";

	for(MutantStack<int>::const_reverse_iterator it(m.rbegin()); it < m.rend(); it++)
	{
		std::cout << *it << std::endl;
		// *it += 10;
	}
}

int main ()
{
	MutantStack<int> m;
	m.push(4);
	m.push(83);
	m.push(210);
	m.push(5601);

	std::cout << MAGENTA << "Iterator\n\n";
	for (MutantStack<int>::iterator it(m.begin()); it < m.end(); it++)
	{
		std::cout << *it << std::endl;
		*it *= 10;
	}

	std::cout << "\n" << RED << "Reverse\n\n";
	for(MutantStack<int>::reverse_iterator it(m.rbegin()); it < m.rend(); it++)
	{
		std::cout << *it << std::endl;
		*it /= 10;
	}
	std::cout << "\n-------------------------\n" << RESET;
	const_iteration(m);
	return 0;
}
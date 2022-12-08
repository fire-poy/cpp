#include "MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);
	std::cout << "top = " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "size = " << mstack.size() << std::endl;
	std::cout << "top = " << mstack.top() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	return 0;
}

// /*
#include <iostream>

void	test_function(const MutantStack<int> &ms)
{
	std::cout << "-------- CONST ITERATOR -------" << std::endl;
	for(MutantStack<int>::const_iterator it(ms.begin()); it < ms.end(); it++)
		std::cout << "elem = " << *it << std::endl;
	std::cout << "-------- REVERSE CONST ITERATOR -------" << std::endl;
	for(MutantStack<int>::const_reverse_iterator it(ms.rbegin()); it < ms.rend(); it++)
		std::cout << "elem = " << *it << std::endl;
}
int main ()
{
	MutantStack<int> ms;
	ms.push(23);
	ms.push(11);
	ms.push(10);
	ms.push(78);

	std::cout << "-------- ITERATOR -------" << std::endl;
	MutantStack<int>::iterator it(ms.begin());
	MutantStack<int>::iterator ite(ms.end());
	for (;it < ite; it++)
		std::cout << "elem = " << *it << std::endl;
	std::cout << "-------- REVERSE ITERATOR -------" << std::endl;
	for(MutantStack<int>::reverse_iterator it(ms.rbegin()); it < ms.rend(); it++)
		std::cout << "elem = " << *it << std::endl;
	test_function(ms);
	return 0;
}
// */
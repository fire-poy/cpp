#include "Array.tpp"

int	main()
{
	 int * a = new int();
	 std::cout << a << std::endl;
	 std::cout << *a << std::endl;

	 Array<int> b(4);
	 std::cout << a << std::endl;
	 std::cout << *a << std::endl;
	 b.getArray();
}

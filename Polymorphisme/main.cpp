#include <iostream>
#include "Sample.class.hpp"

int	main(void)
{
	Sample s1;
	Sample s2(42);
	Sample s3(s1);

	std::cout << s1 << std::endl;
	std::cout << s2 << std::endl;
	std::cout << s3 << std::endl;

	s3 = s2;
	std::cout << s3 << std::endl;
	s1.bar('g');
	s1.bar(42);
	s1.bar(4.2f);
	s1.bar(s1);
	return 0;
}

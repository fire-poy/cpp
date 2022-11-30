#include <iostream>

int	main()
{
	std::string s = "holaf";
	std::string::iterator it= s.begin();
	// size_t		i = 0;

	// for (std::string::iterator it=s.begin(); it!=s.end(); it++)
	while (it != s.end())
	{
		std::cout << *it;
		it++;
		if (it == s.end() - 1 && *it == 'f')
			std::cout << "Float finded" << '\n';
	}
	std::cout << '\n';
	// while (s.at(i))
	// {
	// 	std::cout << s[i] << " " << s.front() << " " << s.back() << '\n';
	// 	i++;
	// }
}

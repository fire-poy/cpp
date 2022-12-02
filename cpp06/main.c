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

struct Data
{
	int x;//size 4
	int y;//size 4
	char c;//size 1
	bool b;//size 1
}

//reinterpret example 
int main()
{
	Data d;
	int	*p;

	d.x = 5;
	d.y = 10;
	d.c = 'a';
	d.b = true;

	p = reinterpret_cast<int *>(&d);
	std::cout << *p << std::endl;
	p++;
	std::cout << *p << std::endl;
	p++;
	// std::cout << *p << std::endl;
	char *c = reiterpret_cast<char *>(p);
	std::cout << *c << std::endl;
	c++;
	std::cout << reinterpret_cast<bool*>c << std::endl;

	return 0;
}
// The result of a reinterpret_cast can't safely be used 
// for anything other than being cast back to its original type;
// If we use this type of cast then it becomes non-portable product
//  (si l'architecture du hardware change ca ne va pas marche comme prevu)
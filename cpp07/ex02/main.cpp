#include "Array.tpp"

int	main()
{
	int * a = new int();
	std::cout << a << std::endl;
	std::cout << *a << std::endl;
	delete a;

	std::cout << "\n\033[0;31m" << "Int" << "\n\033[0;0m\n";
	Array<> b(3);
	std::cout << "Size of array = " << b << std::endl;
	std::cout << b[0] << std::endl;
	std::cout << b[1] << std::endl;
	std::cout << b[2] << std::endl << std::endl;
	b[0] = 4;
	std::cout << b[0] << std::endl;
	
	std::cout << "\n\033[0;95m" << "Scope" << "\n\033[0;0m\n";
	try
	{
		std::cout << b[3] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "\n\033[0;31m" << "Default Constructor" << "\n\033[0;0m\n";
	Array<int> c;
	std::cout << "Size of array = " << c << std::endl;
	try
	{
		std::cout << c[0] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << "\n\033[0;96m" << "Copy" << "\n\033[0;0m\n";
	Array<int> copy(b);
	for (size_t i(0); i < copy.size(); i++)
    {
		std::cout << copy[i] << std::endl;
    }
	copy = c;

	std::cout << "\n\033[0;96m" << "String" << "\n\033[0;0m\n";
	Array<std::string> t_s(3);

	std::cout << t_s << std::endl;
	t_s[0] = "coucou";
	t_s[1] = "patate";
	t_s[2] = "choufleur";

	for (size_t i(0); i < t_s.size(); i++)
    {
		std::cout << t_s[i] << std::endl;
    }

	std::cout << "\n\033[0;95m" << "Scope" << "\n\033[0;0m\n";
	try
	{
		t_s[3] = "brocoli";
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "\n\033[0;91m" << "Float" << "\n\033[0;0m\n";
	Array<float> f(2);	
	std::cout << f << std::endl;
	
	f[0] = 4.2f;
	f[1] = 5.3f;
	for (size_t i(0); i < f.size(); i++)
    {
		std::cout << f[i] << std::endl;
    }

// #define MAX_VAL 750
// int main(int, char**)
// {
//     Array<int> numbers(MAX_VAL);
//     int* mirror = new int[MAX_VAL];
//     srand(time(NULL));
//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         const int value = rand();
//         numbers[i] = value;
//         mirror[i] = value;
//     }
//     //SCOPE
//     {
//         Array<int> tmp = numbers;
//         Array<int> test(tmp);
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         if (mirror[i] != numbers[i])
//         {
//             std::cerr << "didn't save the same value!!" << std::endl;
//             return 1;
//         }
//     }
//     try
//     {
//         numbers[-2] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
//     try
//     {
//         numbers[MAX_VAL] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         numbers[i] = rand();
//     }
//     delete [] mirror;
    return 0;
}

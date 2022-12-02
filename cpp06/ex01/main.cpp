#include "Data.hpp"
#include "Serialize.hpp"

Data	*init_data()
{
	Data		*d = NULL;

	d = new Data;
	d->name = "Pedrito";
	d->i = 42;
	d->f = 3.14f;
	return d;
}

int	main()
{
	uintptr_t	ptr_int;
	Data		*s = init_data();
	Data		*d = NULL;
	
	ptr_int = serialize(s);
	std::cout << "uintptr_t save the address of Data *" << std::endl << std::endl;
	std::cout << "&s ->" << s << " == " << ptr_int << " <- uintptr_t" << std::endl << std::endl;
	std::cout << "uintptr_t size = " << sizeof(ptr_int) << std::endl;
	std::cout << "Data *    size = " << sizeof(Data*) << std::endl << std::endl;

	std::cout << "s-> " << s->name << " " << s->i << " " << s->f << " " << std::endl << std::endl;
	
	d = deserialize(ptr_int);
	
	std::cout << "&d ->" << d << " == " << ptr_int << " <- uintptr_t" << std::endl << std::endl;
	std::cout << "d-> " << d->name << " " << d->i << " " << d->f << " " << std::endl;
	return 0;
}

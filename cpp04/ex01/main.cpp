#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	std::cout << "\033[0;31m";
	std::cout << "STACK" << std::endl;
	std::cout << "\033[0;0m" << std::endl;

	{
		Animal	a;
		std::cout << "a is from type '" << a.getType() << "'" << std::endl;
		a.makeSound();
		std::cout << std::endl;
	
		Cat		c;
		Cat		c2;
		std::cout << std::endl;
		c2 = c;

		std::cout << "c is from type '" << c.getType() << "'" << std::endl;
		c.makeSound();
		std::cout << "c2 is from type '" << c2.getType() << "'" << std::endl;
		c2.makeSound();
		std::cout << std::endl;

		Dog		d;
		std::cout << "d is from type '" << d.getType() << "'" << std::endl;
		d.makeSound();
		std::cout << std::endl;
	}

	std::cout << std::endl;
	std::cout << "\033[0;31m";
	std::cout << "Pointeurs" << std::endl;
	std::cout << "\033[0;0m" << std::endl;

	{
		Animal	*a = new Animal();
		std::cout << "a is from type '" << a->getType() << "'" << std::endl;
		a->makeSound();
		delete a;
		std::cout << std::endl;

		Cat		*c = new Cat();
		std::cout << "c is from type '" << c->getType() << "'" << std::endl;
		c->makeSound();
		delete c;
		std::cout << std::endl;

		Dog		*d = new Dog();
		std::cout << "d is from type '" << d->getType() << "'" << std::endl;
		d->makeSound();
		delete d;
		std::cout << std::endl;
	}

	std::cout << "\033[0;31m";
	std::cout << "Polymorphism" << std::endl;
	std::cout << "\033[0;0m" << std::endl;

	{
		Animal	*a = new Animal();
		std::cout << "a is from type '" << a->getType() << "'" << std::endl;
		a->makeSound();
		std::cout << std::endl;

		Animal	*c = new Cat();
		std::cout << "c is from type '" << c->getType() << "'" << std::endl;
		c->makeSound();
		std::cout << std::endl;

		Animal	*d = new Dog();
		std::cout << "d is from type '" << d->getType() << "'" << std::endl;
		d->makeSound();
		std::cout << std::endl;

		delete d;
		delete c;
		delete a;
	}
	std::cout << std::endl;
	std::cout << "\033[0;31m";
	std::cout << "Wrong animals" << std::endl;
	std::cout << "\033[0;0m" << std::endl;
	{
		WrongAnimal	*a = new WrongAnimal();
		WrongAnimal	*c = new WrongCat();

		std::cout << "a is from type '" << a->getType() << "'" << std::endl;
		a->makeSound();
		std::cout << "c is from type '" << c->getType() << "'" << std::endl;
		c->makeSound();

		delete c;
		delete a;
	}
	std::cout << std::endl;
	std::cout << "\033[0;31m";
	std::cout << "other test" << std::endl;
	std::cout << "\033[0;0m" << std::endl;

	Cat c1;
	Animal &a1 = c1;
	std::cout << "a1 is from type '" << a1.getType() << "'" << std::endl;

}

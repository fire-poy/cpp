#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	std::cout << "\033[0;31m";
	std::cout << "STACK" << std::endl;
	std::cout << "\033[0;0m" << std::endl;

	{
		// AAnimal	a;
		// std::cout << "a is from type '" << a.getType() << "'" << std::endl;
		// a.makeSound();
		// std::cout << std::endl;
	
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
		// AAnimal	*a = new AAnimal();
		// std::cout << "a is from type '" << a->getType() << "'" << std::endl;
		// a->makeSound();
		// delete a;
		// std::cout << std::endl;

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
		// AAnimal	*a = new AAnimal();
		// std::cout << "a is from type '" << a->getType() << "'" << std::endl;
		// a->makeSound();
		// delete a;
		// std::cout << std::endl;

		AAnimal	*c = new Cat();
		std::cout << "c is from type '" << c->getType() << "'" << std::endl;
		c->makeSound();
		std::cout << std::endl;

		AAnimal	*d = new Dog();
		std::cout << "d is from type '" << d->getType() << "'" << std::endl;
		d->makeSound();
		std::cout << std::endl;

		delete d;
		delete c;
	}
	std::cout << std::endl << "\033[0;31m" << "other test";
	std::cout << std::endl << "\033[0;0m" << std::endl;

	Cat c1;
	AAnimal &a1 = c1;
	std::cout << "a1 is from type '" << a1.getType() << "'" << std::endl;

	std::cout << std::endl << "\033[0;31m" << "Brain";
	std::cout << std::endl << "\033[0;0m" << std::endl;
	{
		const int tabSize = 4;
		AAnimal *a[tabSize];

		for (int i = 0; i < tabSize; i++)
		{
			if (i / 2 == 0)
				a[i] = new Dog();
			else
				a[i] = new Cat();
		}
		for (int i = 0; i < tabSize; i++)
		{
			a[i]->makeSound();
			delete a[i];
		}
	}
	std::cout << std::endl << "\033[0;31m" << "Cat Ideas";
	std::cout << std::endl << "\033[0;0m" << std::endl;
	{
		Cat	*c1 = new Cat();
		c1->setIdea("who im I", 0);
		c1->setIdea("fish", 1);
		c1->setIdea("eating donnuts", 2);

		Cat *c2 = new Cat(*c1);
		c2->setIdea("I DONT want to eat donnuts", 2);

		Cat c3;
		c3 = *c2;

		std::cout << std::endl;
		c1->setIdea("play", 0);
		std::cout << "Cat 1 idea: " << c1->getIdea(0) << std::endl;
		std::cout << "Cat 1 idea: " << c1->getIdea(1) << std::endl;
		std::cout << "Cat 1 idea: " << c1->getIdea(2) << std::endl;
		std::cout << std::endl;
		
		std::cout << "Cat 2 idea: " << c2->getIdea(0) << std::endl;
		std::cout << "Cat 2 idea: " << c2->getIdea(1) << std::endl;
		std::cout << "Cat 2 idea: " << c2->getIdea(2) << std::endl;
		std::cout << std::endl;
	
		std::cout << "Cat 3 idea: " << c3.getIdea(0) << std::endl;
		std::cout << "Cat 3 idea: " << c3.getIdea(1) << std::endl;
		std::cout << "Cat 3 idea: " << c3.getIdea(2) << std::endl;
		std::cout << "Cat 3 idea: " << c3.getIdea(110) << std::endl;
		delete c1;
		delete c2;
	}
	std::cout << std::endl << "\033[0;31m" << "Dog Ideas";
	std::cout << std::endl << "\033[0;0m" << std::endl;
	{
		Dog	*c1 = new Dog();
		c1->setIdea("who im I", 0);
		c1->setIdea("steak", 1);
		c1->setIdea("make a hole in the ground", 2);

		Dog *c2 = new Dog(*c1);
		c2->setIdea("chase something", 2);

		Dog c3;
		c3 = *c2;

		std::cout << std::endl;
		c1->setIdea("play", 0);
		std::cout << "Dog 1 idea: " << c1->getIdea(0) << std::endl;
		std::cout << "Dog 1 idea: " << c1->getIdea(1) << std::endl;
		std::cout << "Dog 1 idea: " << c1->getIdea(2) << std::endl;
		std::cout << std::endl;
		
		std::cout << "Dog 2 idea: " << c2->getIdea(0) << std::endl;
		std::cout << "Dog 2 idea: " << c2->getIdea(1) << std::endl;
		std::cout << "Dog 2 idea: " << c2->getIdea(2) << std::endl;
		std::cout << std::endl;
	
		std::cout << "Dog 3 idea: " << c3.getIdea(0) << std::endl;
		std::cout << "Dog 3 idea: " << c3.getIdea(1) << std::endl;
		std::cout << "Dog 3 idea: " << c3.getIdea(2) << std::endl;
		std::cout << "Dog 3 idea: " << c3.getIdea(110) << std::endl;
		delete c1;
		delete c2;
	}
	return 0;
}
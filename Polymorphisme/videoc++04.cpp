#include <string>
#include <iostream>

class ACharacter //le A avant le nom c'est pour indiquer que est une classe abstraite (convention)
{
	private:
		std::sting name;
	public:
		virtual void	attack(std::string const & target) = 0; // c'est une methode PURE il n'y a pas implementation de cette methode
		void			sayHello(std::string const & target);
}
/*
La class Abstraite on ne va pas pouvoir l'instancier
Certains comportements sont definis est certains ne le sont pas
la classe qui herite de l'abstaite va pouvoir implementer les comportements 
qui sont definis comme "abstraits" sinon ça restera abstrait et on ne pourra
pas l'implementer non plus
*/
class Warrior : public ACharacter
{
	public:
		virtual void	attack(std::string const & target);
};

void ACharacter::sayHello(std::string const & target)
{
	std::cout << "Hello " << target << "!" << std::endl;
}

void Warrior::attack(std::string const & target)
{
	std::cout << "*attacks " << target << " with a sword*" << std::endl;
}

class ICoffeMaker //la I devant le nom c'est pour indiquer que est une Insterface (convention)
{
	public:
		virtual void		fillWaterTank(IWaterSource * src) = 0;
		virtual ICoffee*	makeCoffee(std::string const & type) = 0;
}; 

int	main()
{
	ACharacter*	a = new Warrior();

	// ACharacter*	b = new ACharacter();
	// This would NOT be ok because ACharacter is abstact, il va pas compiler

	a->sayHello("students");
	a->attack("roger");
}
 
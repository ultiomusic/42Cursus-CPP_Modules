#include "Dog.hpp"
#include "Cat.hpp"

int main(void) 
{
	const Animal*	cat = new Cat();
	const Animal*	dog = new Dog();
	const Animal*	animal = new Animal();

	delete	cat;
	delete	dog;
	delete	animal;

	std::cout << "---------------------Extra Subject request--------------------" << std::endl;

	int		len = 10;
	int		k = 0;
	Animal	*tab[len];

	while (k < (len / 2))
	{
		tab[k] = new Dog();
		k++;
	}
	while (k < len)
	{
		tab[k] = new Cat();
		k++;
	}
	while (--k >= 0)
		delete tab[k];
	return (0);
}
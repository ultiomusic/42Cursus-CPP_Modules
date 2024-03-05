#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {
	const Animal* i = new Cat();
    const Animal* j = new Dog();

	const WrongAnimal* wrongMeta = new WrongAnimal();
	const WrongAnimal* wrongcat = new WrongCat();

    std::cout << "Type: " << j->getType() << " " << std::endl;
    std::cout << "Type: "  << i->getType() << " " << std::endl;

	std::cout << "----- Animal ------" << std::endl;
    std::cout << "Cat Sound: ";
	i->makeSound();
    std::cout << "Dog Sound: ";
    j->makeSound();


	std::cout << "----- WRONG Animal ------" << std::endl;
    std::cout << "Wrong Animal Sound: ";
	wrongMeta->makeSound();
    std::cout << "Wrong cat Sound: ";
	wrongcat->makeSound();

    return (0);
}
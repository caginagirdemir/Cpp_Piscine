#include "Animal.hpp"
#include "Dog.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();

    std::cout << j->getType() << " " << std::endl;
    j->makeSound();
    delete &j;
    delete &meta;
    return 0;
}
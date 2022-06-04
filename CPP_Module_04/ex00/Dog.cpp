#include "Dog.hpp"

// Constructors
Dog::Dog()
{
    this->type = "Dog";
    std::cout << "Dog Default constructor" << std::endl;
}


// Operators
Dog & Dog::operator=(const Dog &animal_ref) {
	this->type = animal_ref.type;
	std::cout << "Dog Copy assign constructor" << std::endl;
	return *this;
}

// Destructor
Dog::~Dog() {
	std::cout << " Dog Animal destroyed" << std::endl;
}

void Dog::makeSound()
{
    std::cout << "Hav Hav Hav" << std::endl;
}
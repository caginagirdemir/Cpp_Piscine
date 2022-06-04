#pragma once

#include <iostream>
#include "Animal.hpp"

class Dog : public Animal{
    // Constructors
        Dog();
        Dog(const Animal &animal_ref);
        Dog &operator=(const Dog &animal_ref);

    // Deconstructor
        ~Dog();

    void makeSound() override;
};
#pragma once

#include <iostream>
#include <string>

class Animal
{
    public:
        // Constructors
        Animal();
        Animal(std::string);
        Animal(const Animal &animal_ref);
        Animal &operator=(const Animal &animal_ref);

        // Deconstructor
        ~Animal();

        // Get function
        std::string getType();

        virtual void makeSound();

    protected:
        std::string type;

};
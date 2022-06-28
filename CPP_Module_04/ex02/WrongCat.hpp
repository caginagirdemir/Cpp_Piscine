
// Header-protection
#pragma once

// Includes
#include "WrongAnimal.hpp"

// classes

class WrongCat: public WrongAnimal
{
	private:
		// Private Members

	public:
	// Constructors
		WrongCat();
		WrongCat(const WrongCat &copy);

	// Deconstructors
		~WrongCat();

	// Overloaded Operators
		WrongCat &operator=(const WrongCat &src);

	// Public Methods
		void makeSound(void)const;
	// Getter

	// Setter

};

#ifndef FLAGTRAP_HPP
# define FLAGTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public:
        //contructors
        FragTrap();
        FragTrap(std::string name);
        FragTrap(const FragTrap &flagtrap_ref);
        FragTrap & operator = (const FragTrap &flagtrap_ref);

        // //decontructor
        ~FragTrap();

        void highFivesGuys();


};

#endif
#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:
        // Constructors
        ScavTrap();
        ScavTrap(const ScavTrap &copy);
        ScavTrap(std::string name);

        // Destructor
        ~ScavTrap();
        
        // Operators
        ScavTrap & operator=(const ScavTrap &assign);

        void guardGate();
        void attack(const std::string &target); //override
    
    private:
	
};

#endif
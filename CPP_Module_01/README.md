# CPP Module 01

- ### Exercise 00

First, implement a *Zombie* class. It has a string private attribute name.

Add a member function void announce (void)\; to the Zombie class. Zombies announce themselves as follows:

name: BraiiiiiinnnzzzZ...
  
Then, implement the two following functions:
  
```Zombie* newZombie (std::string name);```

It creates a zombie, name it, and return it so you can use it outside of the function scope.

```void randomChump (std::string name);```

It creates a zombie, name it, and the zombie announces itself.

Now, what is the actual point of the exercise? You have to determine in what case it's batter to allocate the zombies on the stack or heap.

Zombies must be destroyed when you don't need them anymore. The destructor must print a message with the name of the zombie for debuggin purposes.

- ####Exercise 01

Time to create a horde of Zombies!

Implement the following function in the appropriate file:

```Zombie* zombieHorde (int N, std::string name);```

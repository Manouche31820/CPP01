#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(void):_name("Sample")
{
	std::cout << "Zombie creation" << std::endl;
	// return;
}

Zombie::Zombie(std::string name){
	_name = name;
}

Zombie::~Zombie(void){ 
	std::cout << "Zombie " << _name << " has been destroyed properly." << std::endl;
	// return;
}

void Zombie::announce (void){
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
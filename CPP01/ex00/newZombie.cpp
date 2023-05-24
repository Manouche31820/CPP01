#include <iostream>
#include "Zombie.hpp"
#include <string>

Zombie* newZombie(std::string name){
	Zombie *test = new Zombie(name);

	test->announce();
	return (test);
}
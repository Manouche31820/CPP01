#include <iostream>
#include "Zombie.hpp"
#include <string>

void randomChump(std::string name){
	Zombie test(name);

	test.announce();
	return;
}
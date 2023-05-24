#include <iostream>
#include "Zombie.hpp"
#include <string>
 // #include <cstdlib>

int main(){
	Zombie *test;
	test = newZombie("Phap");
	delete test;
	randomChump("Alexis");
	// system("leaks ./zombie");
	return (0);
}
#include <iostream>
#include "Zombie.hpp"
#include <string>
 // #include <cstdlib>

int main(){
	Zombie *test;
	test = zombieHorde(9, "Phap");
	delete []test;
	// system("leaks ./zombie");
	return (0);
}
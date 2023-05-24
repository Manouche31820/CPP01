#include "Harl.hpp"
#include <string>
#include <iostream>

int main(int ac, char **argv){

	if (ac != 2){
		std::cout << "Error" << std::endl;
		return (0);
	}
	Harl salut;
	std::string level = argv[1];
	salut.complain(level);
	return 0;
}

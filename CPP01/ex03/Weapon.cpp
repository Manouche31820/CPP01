#include <iostream>
#include "Weapon.hpp"

Weapon::Weapon(const char *type):_type(type){
	std::cout << "Weapon creation" << std::endl;
}

Weapon::~Weapon(void){ 
	std::cout << "Weapon has been destroyed properly." << std::endl;
}

void Weapon::setType(std::string type){
	_type = type;
}

std::string Weapon::getType(void){
	return _type;
}
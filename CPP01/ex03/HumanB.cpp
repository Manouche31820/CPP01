#include <iostream>
#include "HumanB.hpp"

HumanB::HumanB(const std::string name):_name(name){
	_gun = NULL;
	std::cout << _name + " creation" << std::endl;
}

HumanB::~HumanB(void){
	if (_gun == NULL)
		std::cout << _name << " has been destroyed" << std::endl;
	else
		std::cout << _name << " has been destroyed properly" << std::endl;
}

void HumanB::attack(void){
	std::cout << _name + " attacks with " + getWeapon() << std::endl;
	return ;
}

void HumanB::setWeapon(Weapon &gun){
	this->_gun = &gun;
}

std::string HumanB::getWeapon(void){
	return _gun->getType();
}

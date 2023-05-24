#include <iostream>
#include "HumanA.hpp"

HumanA::HumanA(const std::string name, Weapon &gun):_name(name), _gun(gun){
	std::cout << _name + " creation " << std::endl;
}

HumanA::~HumanA(void){ 
	std::cout << _name << " has been destroyed properly" << std::endl;
}

void HumanA::attack(void){
	std::cout << _name + " attacks with " + _gun.getType() << std::endl;
	return ;
}

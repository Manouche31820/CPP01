#pragma once 
#include "Weapon.hpp"

class HumanA{

public:

	HumanA(const std::string name, Weapon &gun);
	~HumanA(void);
	void attack(void);

private:

	std::string _name;
	Weapon &_gun;
};
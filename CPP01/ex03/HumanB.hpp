#pragma once
#include "Weapon.hpp"

class HumanB{

public:

	HumanB(const std::string name);
	~HumanB(void);
	void setWeapon(Weapon &gun);
	std::string getWeapon(void);
	void attack(void);

private:

	std::string _name;
	Weapon *_gun;
};
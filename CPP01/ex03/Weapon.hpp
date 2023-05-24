#pragma once 

class Weapon
{

public:

	Weapon(const char *type);
	~Weapon(void);
	void setType(std::string type);
	std::string getType(void);
	

private:
	std::string _type;
};
#include <iostream>
#include "Harl.hpp"

Harl::Harl(void){
}

Harl::~Harl(void){
}

void Harl::debug( void ){
	std::cout <<  "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !" << std::endl;
}

void Harl::info( void ){
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
}

void Harl::warning( void ){
	std::cout <<  "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error( void ){
	std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level){

	void (Harl::*Mytab[4])(void);
	static const char *lvl[] = { "DEBUG", "INFO", "WARNING", "ERROR", ""};

	Mytab[0] = &Harl::debug;
	Mytab[1] = &Harl::info;
	Mytab[2] = &Harl::warning;
	Mytab[3] = &Harl::error;

	for (int i = 0; lvl[i][0]; i++){
		if (level.compare(lvl[i]) == 0){
			(this->*Mytab[i])();
			break;
		}
	}
}
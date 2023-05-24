#include "Harl.hpp"
#include <string>

int main(){
	Harl salut;
	std::string level = "DEBUG";
	salut.complain(level);
	level = "INFO";
	salut.complain(level);
	level = "WARNING";
	salut.complain(level);
	level = "ERROR";
	salut.complain(level);
	return 0;
}

#include <iostream>
#include <string>

int main(){
	std::string STR = "HI THIS IS BRAIN"; 
	std::string *stringPTR = &STR;
	std::string &stringREF = STR;

	std::cout << &STR << std::endl;
	std::cout << stringPTR << std::endl;
	std::cout << &stringREF << std::endl;

	std::cout << STR << std::endl;
	std::cout << *stringPTR << std::endl;
	std::cout << stringREF << std::endl;

	return (0);
}
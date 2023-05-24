#include <fstream>
#include <iostream>
#include <string>

std::string search_and_replace(std::string line, std::string search, std::string replace){
	size_t pos = line.find(search);
	std::string newline;
	std::string previous_line;
	int curseur = 0;
	int size_line = line.length();
	int size_word = search.length();

	while (line.find(search) != std::string::npos){
		newline = newline + line.substr(curseur,pos) + replace;
		line = line.substr(pos + size_word, size_line);
		newline = newline + line;
		pos = line.find(search);
	}
	return (newline);
}

int main(int ac, char **argv) {

	if (ac != 4){
  		std::cout << "Error" << std::endl;
  		return(1);
  	}
	std::ifstream file(argv[1]);
	std::ofstream newfile;
	std::string replace = argv[3];
	std::string name = argv[1];
	std::string name2 = ".replace";
	std::string name3 = name.append(name2);
	newfile.open(name3.c_str(), std::ofstream::out | std::ofstream::trunc);

  if (file.is_open() && newfile.is_open()){
    std::string search = argv[2];
    std::string line;
    int num_line = 1;
    while (std::getline(file, line)) {
    	if (line.find(search) != std::string::npos) {
    		line = search_and_replace(line, search, replace);
    	}
    	newfile << line << std::endl;
    	num_line++;
    }
    newfile.close ();
 	file.close ();
  }
  else {
    std::cout << "Error" << std::endl;
    return(1);
  }
  return 0;
}
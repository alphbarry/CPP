#include <fstream>
#include <iostream>
#include <string>

int	main(int ac, char **av) {
	std::string	s1;
	std::string	s2;
	std::string	filename;
	std::ifstream	filename_replace;
	std::string	chr;

	if (ac != 4) {
		std::cout << "Usage: " << av[0] << " <string1> <string2>" << std::endl;
		return 1;
	}
	filename = av[1];
	s1 = av[2];
	s2 = av[3];
	chr = strchr(filename, s1);
	
	return 0;
}

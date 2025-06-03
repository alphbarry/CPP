#include <iostream>

int	main(){
	std::string	hi = "HI THIS IS BRAIN";
	std::string*	stringPTR = &hi;
	std::string&	stringREF = hi;

	std::cout << "Memory addres of the string is: " << &hi << std::endl;
	std::cout << "Memory addres of the stringPTR is: " << stringPTR << std::endl;
	std::cout << "Memory addres of the stringREF is: " << &stringREF << std::endl;

	std::cout << "Value of the string is: " << hi << std::endl;
	std::cout << "Value of the stringPTR is: " << *stringPTR << std::endl;
	std::cout << "Value of the stringREF is: " << stringREF << std::endl;
	return (0);
}

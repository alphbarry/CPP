#include "../inc/ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){
}

ScalarConverter::ScalarConverter(const ScalarConverter &other) {
	*this = other; // To avoid unused parameter warning
}

void ScalarConverter::convert(const std::string &literal) {
	std::cout << "Converting literal: " << literal << std::endl;
	if (which_type(literal) == CHAR) {
		char c = literal[0];
		std::cout << "char: '" << c << "'" << std::endl;
		std::cout << "int: " << static_cast<int>(c) << std::endl;
		std::cout << "float: " << static_cast<float>(c) << "f" << std::endl;
		std::cout << "double: " << static_cast<double>(c) << std::endl;
	} else if (which_type(literal) == INT) {
		int i = std::stoi(literal);
		std::cout << "char: '" << static_cast<char>(i) << "'" << std::endl;
		std::cout << "int: " << i << std::endl;
		std::cout << "float: " << static_cast<float>(i) << "f" << std::endl;
		std::cout << "double: " << static_cast<double>(i) << std::endl;
	} else if (which_type(literal) == FLOAT) {
		float f = std::stof(literal);
		std::cout << "char: '" << static_cast<char>(f) << "'" << std::endl;
		std::cout << "int: " << static_cast<int>(f) << std::endl;
		std::cout << "float: " << f << "f" << std::endl;
		std::cout << "double: " << static_cast<double>(f) << std::endl;
	} else if (which_type(literal) == DOUBLE) {
		double d = std::stod(literal);
		std::cout << "char: '" << static_cast<char>(d) << "'" << std::endl;
		std::cout << "int: " << static_cast<int>(d) << std::endl;
		std::cout << "float: " << static_cast<float>(d) << "f"  << std::endl;
		std::cout  <<"double: "<< d<<std::endl;
	} else {
		std::cerr <<"Invalid literal"<<std::endl;
	}
}

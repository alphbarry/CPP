#include "../inc/ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){
}

ScalarConverter::ScalarConverter(const ScalarConverter &other) {
	*this = other; // To avoid unused parameter warning
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter &other) {
	if (this != &other) {
		// Copy assignment logic if needed
	}
	return *this;
}

void ScalarConverter::convert(const std::string &literal) {
	std::cout << "Converting literal: " << literal << std::endl;

	int type = which_type(literal); // evita llamarlo varias veces

	if (type == CHAR) {
		char c = literal[0];
		std::cout << "char: '" << c << "'" << std::endl;
		std::cout << "int: " << static_cast<int>(c) << std::endl;
		std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
		std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
	} else {
		double value;
		try {
			// intenta convertir a double como base para los cast
			value = std::stod(literal);
		} catch (const std::exception &e) {
			std::cerr << "Invalid literal" << std::endl;
			return;
		}
		// CHAR
		std::cout << "char: ";
		if (std::isnan(value) || value < 0 || value > 127)
			std::cout << "impossible";
		else if (!std::isprint(static_cast<char>(value)))
			std::cout << "Non displayable";
		else
			std::cout << "'" << static_cast<char>(value) << "'";
		std::cout << std::endl;
		// INT
		std::cout << "int: ";
		if (std::isnan(value) || value < MIN_INT || value > MAX_INT)
			std::cout << "impossible";
		else
			std::cout << static_cast<int>(value);
		std::cout << std::endl;
		// FLOAT
		float f = static_cast<float>(value);
		std::cout << "float: " << f;
		if (f == static_cast<int>(f)) std::cout << ".0";
		std::cout << "f" << std::endl;
		// DOUBLE
		std::cout << "double: " << value;
		if (value == static_cast<int>(value)) std::cout << ".0";
		std::cout << std::endl;
	}
}


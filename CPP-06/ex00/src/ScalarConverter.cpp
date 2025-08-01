#include "../inc/ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){
}

ScalarConverter::ScalarConverter(const ScalarConverter &other) {
	*this = other; 
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter &other) {
	if (this != &other) {
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
        const char* str = literal.c_str();
        char* endptr;
        double value = strtod(str, &endptr);

        // Verificar si toda la cadena fue convertida
        if (str == endptr || *endptr != '\0') {
            std::cerr << "Invalid literal" << std::endl;
            return;
        }

        std::cout << "char: ";
        if (std::isnan(value) || value < 0 || value > 127)
            std::cout << "impossible";
        else if (!std::isprint(static_cast<char>(value)))
            std::cout << "Non displayable";
        else
            std::cout << "'" << static_cast<char>(value) << "'";
        std::cout << std::endl;

        std::cout << "int: ";
        if (std::isnan(value) || value < MIN_INT || value > MAX_INT)
            std::cout << "impossible";
        else
            std::cout << static_cast<int>(value);
        std::cout << std::endl;

        float f = static_cast<float>(value);
        std::cout << "float: " << f;
        if (f == static_cast<int>(f)) std::cout << ".0";
        std::cout << "f" << std::endl;

        std::cout << "double: " << value;
        if (value == static_cast<int>(value)) std::cout << ".0";
        std::cout << std::endl;
    }
}


#include "../inc/ScalarConverter.hpp"

static int ischar(const std::string& lit){
	if(lit.length() == 1 && !isdigit(lit[0]))
		return 1;
	return 0;
}

static int	isint(const std::string& lit){
	int	i = 0;

	while((lit[i] >= 0 && lit[i] <= 9) || lit[i] == '-' || lit[i] == '+'){
		if(lit[i] == '-' || lit[i] == '+'){
			if(i != 0)
				return 0;
		}
		i++;
	}
	return 1;
}

e_type	wich_type(const std::string& literal){
	if(ischar(literal))
		return CHAR;
	if(isint(literal))
		return INT;
	if(isfloat(literal))
		return FLOAT;
	if(isdouble(literal))
		return DOUBLE;
	if (isspecial(literal))
		return SPECIAL;
}

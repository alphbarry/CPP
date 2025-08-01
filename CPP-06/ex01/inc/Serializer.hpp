#pragma once

#include <iostream>



typedef struct s_data {
	int age;
	std::string name;
	std::string sername;
} Data;

class Serializer {
	private:
		Serializer();
		Serializer(const Serializer &other);
		Serializer &operator=(const Serializer &other);
	public:
		static unsigned long serialize(Data *ptr);
		static Data *deserialize(unsigned long raw);
};

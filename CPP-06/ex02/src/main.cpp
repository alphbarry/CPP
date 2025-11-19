#include "../inc/Base.hpp"
#include "../inc/A.hpp"
#include "../inc/B.hpp"
#include "../inc/C.hpp"

#include <iostream>
#include <cstdlib> // rand, srand
#include <ctime>   // time
#include <exception>

Base* generate(void) {
	int random = rand() % 3;
	if (random == 0)
		return new A();
	if (random == 1)
		return new B();
	return new C();
}

void identify(Base* p) {
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
	else
		std::cout << "Unknown type" << std::endl;
}

void identify(Base& p) {
	try {
		A& a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "A" << std::endl;
		return;
	} catch (std::exception&) {}

	try {
		B& b = dynamic_cast<B&>(p);
		(void)b;
		std::cout << "B" << std::endl;
		return;
	} catch (std::exception&) {}

	try {
		C& c = dynamic_cast<C&>(p);
		(void)c;
		std::cout << "C" << std::endl;
		return;
	} catch (std::exception&) {}

	std::cout << "Unknown type" << std::endl;
}

int main() {
	srand(static_cast<unsigned int>(time(0)));

	Base* instance = generate();
	identify(instance);
	identify(*instance);

	delete instance;
	return 0;
}

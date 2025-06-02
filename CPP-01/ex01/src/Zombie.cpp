#include "../inc/Zombie.hpp"

void	Zombie::announce() {
	cout << this->name << ": BraiiiiiiinnnzzzZ..." << endl;
}

Zombie::Zombie(string name){
	this->name = name;
	cout << "Zombie " << name << " created." << endl;
}

Zombie::~Zombie(void) {
	cout << "Zombie " << this->name << " destroyed." << endl;
}

void	Zombie::setName(string name) {
	this->name = name;
}

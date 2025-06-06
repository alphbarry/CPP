#include "../inc/HumanB.hpp"

HumanB::HumanB(std::string name) : name(name){
	std::cout << "HumanB:" << name << " created with "<< std::endl;
}

HumanB::~HumanB(void){
	std::cout << "HumanB:" << name << " destroyed" << std::endl;
}

void	HumanB::attack(){
	std::cout << "HumanB:" << name << " attacks with " << weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon){
	this->weapon = &weapon;
}

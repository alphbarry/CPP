#include "../inc/HumanB.hpp"

HumanB::HumanB(std::string name, Weapon &weapon) : name(name), weapon(weapon){
	std::cout << "HumanB:" << name << " created with " << weapon.getType() << std::endl;
}

HumanB::~HumanB(void){
	std::cout << "HumanB:" << name << " destroyed" << std::endl;
}

void	HumanB::attack(){
	std::cout << "HumanB:" << name << " attacks with " << weapon.getType() << std::endl;
}

void	HumanB::setWeapon(Weapon weapon){
	this->weapon = weapon;
}

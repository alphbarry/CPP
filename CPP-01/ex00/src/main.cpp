#include "../inc/Zombie.hpp"

int	main(){
	Zombie	*z;
	z = newZombie("Alpha");
	z->announce();
	randomChump("Alex");
	delete z;
	return (0);
}

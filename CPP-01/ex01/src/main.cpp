#include "../inc/Zombie.hpp"

Zombie*	zombieHorde(int N, string name);

int	main(){
	int	size = 10;

	Zombie*	horde = zombieHorde(size, "Zombie");
	for (int i = 0; i < size; i++){
		horde[i].announce();
	}
	delete[] horde;
}

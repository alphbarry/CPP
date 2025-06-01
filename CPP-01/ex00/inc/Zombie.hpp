#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>
using namespace std;

class	Zombie{
	private:
		string	name;
	public:
		void	announce(void);
		Zombie(string name);
		~Zombie(void);
};

Zombie	*newZombie(string name);
void	randomChump(string name);
#endif

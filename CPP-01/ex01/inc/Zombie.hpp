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
		Zombie(){
			cout << "Zombie created." << endl;
		}
		Zombie(string name);
		~Zombie(void);
		void	setName(string name);
};

Zombie	*newZombie(string name);
void	randomChump(string name);
#endif

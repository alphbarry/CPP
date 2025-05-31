#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>
using namespace std;

class	Zombie{
	private:
		string	name;
	public:
		void	annoucement(){
			cout << "BraiiiiiiinnnzzzZ...";
		}
		Zombie* newZombie(string name){
			Zombie* newZombie = new Zombie();
			newZombie->name = name;
			return newZombie;
		}
		void	randomChump(string name){
			Zombie*	newZombie = new Zombie();
			newZombie->name = name;
			annoucement();
		}
};

#endif

#include <iostream>
using namespace std;

class	Megaphone{
	public:
		void	makeSound(){
			cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
		}
};

int	main(int ac, char **av){
	Megaphone	mega;

	if (ac == 1)
		mega.makeSound();
	else{
		for (int i = 0; i < ac; i++){
		for (int j = 0; av[i][j]; j++){
			if (av[i][j] >= 'a' && av[i][j] <= 'z')
				av[i][j] -= 32; // Convert to uppercase
			}	
		}
		cout << av[1] << endl;
	}
	return 0;
}

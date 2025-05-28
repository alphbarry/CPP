#include <iostream>
using namespace std;

class	Megaphone{
	public:
		void	makeSound(){
			cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << endl;		}
};

char	ft_toupper(char c){
	return ((c >= 'a' && c <= 'z') ? c - 32 : c);
}

int	main(int ac, char **av){
	Megaphone	mega;

	if (ac == 1)
		mega.makeSound();
	else{
		for (int i = 0; i < ac; i++){
			for (int j = 0; av[i][j]; j++){
				av[i][j] = ft_toupper(av[i][j]);
			}
		}
		cout << av[1] << endl;
	}
	return 0;
}

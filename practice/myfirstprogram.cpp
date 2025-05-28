#include <string>
#include <iostream>
#include <cmath>
using namespace std;

int	main() {
	int	a = 5;
	int	b = 10;
	int	c = a + b;
	int	time = 20;
	auto add = [](int x, int y)
	{ 
		return x + y;
	};
	string	res;
	int	x;
	int MyAge = 25;
	float Height = 1.80;
	string	yourname;
	string	yourfullname;
	string firstname = "John ";
	string lastname = "Doe";
	string fullname = firstname.append(lastname);
	res = (time < 14) ? "Godd morning" : "Good evening";
	cout << res << endl;
	cout << "The fourth character of the name is: " << fullname[3] << ", and the last one is : " << fullname[fullname.size() - 1] << endl;
	std::cout << "My name is " << fullname << ", I am " << MyAge << " years old, and " << Height << " feet tall." << std::endl;
	cout << "And what's your name? ";
	getline(cin, yourfullname);
	cout << "Your fullname is: " << yourfullname << endl;
	fullname.at(fullname.size() - 1) = 'f';
	cout << "We will change the name to DOF :" << fullname << endl; 
	cout << "a = 5 is bigger than b = 10? " << (a >= b) << endl;
	std::cout << "type a number: ";
	std:: cin >> x;
	std::cout << "You entered: " << x << std::endl;
	cout << "The sum of a and b is : " << add(a, b) << endl; 
	return 0;
}

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <string>
#include <iomanip>
#include "../inc/Contact.hpp"
using namespace std;

class	Phonebook{
	private:
		Contact	contacts[8];
		int	size;
		int	index;
	public:
		 int	getSize() const;
		 void	addContact(string data[5]);
		 void	displayContact(int i);
		 void	displayPhonebook();
		 string	searchContacts();
		 Phonebook() : size(0), index(0) {};

};

#endif

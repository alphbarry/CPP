#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <iostream>
#include <limits>
using namespace std;

class	Contact {
	private:
		string	firstName;
		string	lastName;
		string	nickname;
		string	phoneNumber;
		string	secret;

	public:
		string	getFirstName();
		string	getLastName();
		string	getNickname();
		string	getPhoneNumber();
		string	getSecret();
		void	setFirstName(string firstName);
		void	setLastName(string lastName);
		void	setNickname(string nickname);
		void	setPhoneNumber(string phoneNumber);
		void	setSecret(string secret);
};

#endif

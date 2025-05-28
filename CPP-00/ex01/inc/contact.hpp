#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <iostream>
using namespace std;

class	Contact {
	private:
		int		index;
		string	firstName;
		string	lastName;
		string	nickname;
		string	phoneNumber;
		string	secret;

	public:
		string	getFirstName() const;
		string	getLastName() const;
		string	getNickname() const;
		string	getPhoneNumber() const;
		string	getSecret() const;
		void	setFirstName(string firstName);
		void	setLastName(string lastName);
		void	setNickname(string nickname);
		void	setPhoneNumber(string phoneNumber);
		void	setSecret(string secret);
};

#endif

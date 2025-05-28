#include "Contact.hpp"

string Contact::getFirstName() const {
	return firstName;
}

string Contact::getLastName() const {
	return lastName;
}

string Contact::getNickname() const {
	return nickname;
}

void Contact::setFirstName(string firstName) {
	this->firstName = firstName;
}

void Contact::setLastName(string lastName) {
	this->lastName = lastName;
}

void Contact::setNickname(string &nickname) {
	this->nickname = nickname;
}

void Contact::setPhoneNumber(string phoneNumber) {
	this->phoneNumber = phoneNumber;
}

string Contact::getPhoneNumber() const {
	return phoneNumber;
}

void Contact::setSecret(string darkestSecret) {
	this->Secret = Secret;
}

string Contact::getSecret() const {
	return secret;
}

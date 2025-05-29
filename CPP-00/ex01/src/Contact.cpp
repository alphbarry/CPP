#include "../inc/Contact.hpp"

std::string Contact::getFirstName() {
	return firstName;
}

string Contact::getLastName() {
	return lastName;
}

string Contact::getNickname() {
	return nickname;
}

void Contact::setFirstName(string firstName) {
	this->firstName = firstName;
}

void Contact::setLastName(string lastName) {
	this->lastName = lastName;
}

void Contact::setNickname(string nickname) {
	this->nickname = nickname;
}

void Contact::setPhoneNumber(string phoneNumber) {
	this->phoneNumber = phoneNumber;
}

string Contact::getPhoneNumber() {
	return phoneNumber;
}

void Contact::setSecret(string Secret) {
	this->secret = Secret;
}

string Contact::getSecret() {
	return secret;
}

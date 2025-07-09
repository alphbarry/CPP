#include "Book.hpp"

Book::Book(){
	std::cout << "Book constructor called." << std::endl; 
}

Book::Book(const Book& copy){
	this->_name = copy._name;
	this->_author = copy._author;
	this->_year = copy._year;
	std::cout << "Book copy constructor called." << std::endl;
}

Book& Book::operator=(const Book& copy){
	if (this != &copy){
		this->_name = copy._name;
		this->_author = copy._author;
		this->_year = copy._year;
	}
	std::cout << "Book operator= constructor called." << std::endl;
	return *this;
}

Book::~Book(){
	std::cout << "Book destructor called." << std::endl;
}

std::string Book::getName() const {
	return this->_name;
}

std::string Book::getAuthor() const {
	return this->_author;
}

int Book::getYear() const {
	return this->_year;
}

void Book::setName(const std::string& name) {
	this->_name = name;
}

void Book::setAuthor(const std::string& author) {
	this->_author = author;
}

void Book::setYear(int year) {
	this->_year = year;
}

std::ostream& operator<<(std::ostream& os, const Book& book){
	os << "Book Name: " << book.getName() << ", Author: " << book.getAuthor() << ", Year: " << book.getYear();
	return os;
}

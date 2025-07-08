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

std::ostream& operator<<(std::ostream& os, const Book& book){
	os << "Book Name: " << book.getName() << ", Author: " << book.getAuthor() << ", Year: " << book.getYear();
	return os;
}

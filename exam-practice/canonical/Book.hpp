#pragma once

#include <iostream>

class Book {
	private:
		std::string	_name;
		std::string	_author;
		int			_year;
	
	public:
		Book();
		Book(const Book& copy);
		Book& operator=(const Book& copy);
		~Book();
		std::string	getName;
		std::string	getAuthor;
		int			getYear;
		void		setName(std::string name);
		void		setAuthor(std::string author);
		void		steYear(int year);

		std::ostream& operator<<(std::ostream& os, const Book& book);
};

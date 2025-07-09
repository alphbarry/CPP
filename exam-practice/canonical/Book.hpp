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
		std::string	getName() const;
		std::string	getAuthor() const;
		int			getYear() const;
		void		setName(const std::string& name);
		void		setAuthor(const std::string& author);
		void		setYear(int year);

};

std::ostream& operator<<(std::ostream& os, const Book& book);


#include "Book.hpp"

int	main(){
	Book	*IT = new Book;
	std::string name, author;
	int	year;
	
	std::cout << "Insert the name: ";
	getline(std::cin, name);
	std::cout << "Insert the author: ";
	getline(std::cin, author);
	std::cout << "Insert the year: ";
	std::cin >> year;
	IT->setName(name);
	IT->setAuthor(author);
	IT->setYear(year);

	std::cout << *IT << std::endl;

	delete IT;
		
	return 0;
}

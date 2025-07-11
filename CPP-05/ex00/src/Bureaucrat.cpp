#include "../inc/Bureaucrat.hpp"

Bureaucrat::Bureaucrat(){
	std::cout << "Bureaucrat constructor called." << std::endl;
}

Bureaucrat::~Bureaucrat(){
	std::cout << "Bureaucrat destructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& copy){
	this->_grade = copy._grade;
	std::cout << "Bureaucrat copy constructor called." << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& copy){
	if (this != &copy){
		this->_grade = copy._grade;
	}
	std::cout << "BUreaucrat operator= constructor called." << std::endl;
	return *this;
}

std::string Bureaucrat::getName() const{
	return this->_name;
}

int	Bureaucrat::getGrade() const{
	return this->_grade;
}
void	Bureaucrat::setGrade(int grade){
	this->_grade = grade;
}

void	Bureaucrat::IncrementGrade(int grade){
	this->_grade = grade - 1;
}

void	Bureaucrat::DecrementGrade(int grade){
	this->_grade = grade + 1;
}

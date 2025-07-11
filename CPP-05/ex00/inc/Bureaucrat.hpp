#pragma once

#include <iostream>

class	Bureaucrat{
	private:
		std::string const	_name;
		int			_grade;

	public:
		Bureaucrat();
		Bureaucrat(const Bureaucrat& copy);
		Bureaucrat& operator=(const Bureaucrat& copy);
		~Bureaucrat();

		void	GradeTooHighException();
		void	GradeTooLowException();
		
		int	getGrade() const;
		std::string	getName() const;
		void	setGrade(int grade);
		void	setName(const std::string& name);

		void	IncrementGrade(int grade);
		void	DecrementGrade(int grade);
};

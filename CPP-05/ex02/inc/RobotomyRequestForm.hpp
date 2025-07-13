#pragma once 

#include "AForm.hpp"

class RobotomyRequestForm : public AForm {
	private:
		std::string _target;

		void performAction() const override;

	public:
		RobotomyRequestForm();
		RobotomyRequestForm(const std::string &target);
		RobotomyRequestForm(const RobotomyRequestForm &copy);
		RobotomyRequestForm &operator=(const RobotomyRequestForm &copy);
		virtual ~RobotomyRequestForm();

		const std::string &getTarget() const;
};

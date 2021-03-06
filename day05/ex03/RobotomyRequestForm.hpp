
#pragma once

#include "Form.hpp"

class RobotomyRequestForm: public Form
{
	public:

		void	action(const std::string & target) const;

		RobotomyRequestForm(const std::string & target);
		RobotomyRequestForm();
		~RobotomyRequestForm();
		RobotomyRequestForm(const RobotomyRequestForm &);
		RobotomyRequestForm &operator=(const RobotomyRequestForm & b);
};

// Copyright (c) 2022 João Rodriguez A.K.A. VLN37. All rights reserved.

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include "Form.hpp"

class RobotomyRequestForm : public Form {

public:
	static int req_sign;
	static int req_exec;

	RobotomyRequestForm(void);
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(const RobotomyRequestForm& src);
	~RobotomyRequestForm(void);

	const RobotomyRequestForm& operator=(const RobotomyRequestForm& rhs);

	virtual void enact(const Form& form) const;

private:
	const std::string	_name;
	const int			_min_grade;
	const int			_min_exec;
	std::string			_target;
	bool				_signed;
};

#endif

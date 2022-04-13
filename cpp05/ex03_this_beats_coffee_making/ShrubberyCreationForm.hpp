// Copyright (c) 2022 João Rodriguez A.K.A. VLN37. All rights reserved.

#ifndef SHRUBERRYCREATIONFORM_HPP
# define SHRUBERRYCREATIONFORM_HPP

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include "Form.hpp"

class ShrubberyCreationForm : public Form {
public:
	static int req_sign;
	static int req_exec;

	ShrubberyCreationForm(void);
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(const ShrubberyCreationForm& src);
	~ShrubberyCreationForm(void);

	const ShrubberyCreationForm& operator=(const ShrubberyCreationForm& rhs);

	virtual void enact(const Form& form) const;

private:
	const std::string	_name;
	const int			_min_grade;
	const int			_min_exec;
	std::string			_target;
	bool				_signed;
};

#endif

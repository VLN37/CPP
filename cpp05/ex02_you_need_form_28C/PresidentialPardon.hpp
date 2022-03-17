// Copyright (c) 2022 João Rodriguez A.K.A. VLN37. All rights reserved.

#ifndef PRESIDENTIALPARDON_HPP
# define PRESIDENTIALPARDON_HPP

#include <iostream>
#include <string>
#include "Form.hpp"

class PresidentialPardon : public Form {
public:
	static int req_sign;
	static int req_exec;

	PresidentialPardon(void);
	PresidentialPardon(std::string target);
	PresidentialPardon(const PresidentialPardon& src);
	~PresidentialPardon(void);

	const PresidentialPardon& operator=(const PresidentialPardon& rhs);

	virtual void enact(const Form& form) const;

private:
	const std::string	_name;
	const int			_min_grade;
	const int			_min_exec;
	std::string			_target;
	bool				_signed;
};

#endif

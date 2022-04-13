// Copyright (c) 2022 João Rodriguez A.K.A. VLN37. All rights reserved.

#include "RobotomyRequestForm.hpp"

int RobotomyRequestForm::req_sign = 72;
int RobotomyRequestForm::req_exec = 45;

RobotomyRequestForm::RobotomyRequestForm(void)
: Form(req_sign, req_exec), _name(format_name("Form #"))
	, _min_grade(req_sign), _min_exec(req_exec), _signed(false) {
	_target = "NULL";
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& src)
: Form(req_sign, req_exec), _name(src.get_name()), _min_grade(src.get_grade()),
	_min_exec(src.get_exec()) {
	*this = src;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target)
	: Form(req_sign, req_exec), _name(format_name("Form #"))
	, _min_grade(req_sign), _min_exec(req_exec) {
	this->_target = target;
}

RobotomyRequestForm::~RobotomyRequestForm(void) {
	return;
}

const RobotomyRequestForm
& RobotomyRequestForm::operator=(const RobotomyRequestForm& rhs) {
	this->_signed = rhs.is_signed();
	this->_target = rhs._target;
	return *this;
}

void RobotomyRequestForm::enact(const Form& form) const {
	unsigned int seed;

	std::cout << "\n******* ROBOTOMY REQUEST FORM EXECUTION *******\n\n"
			  << "FORM NAME           : "
			  << form.get_name() << "\n"
			  << "TARGET TO ROBOTOMIZE: "
			  << this->_target << "\n\n"
			  << "< UNCOMFORTABLE DRILLING NOISES >\n\n";
	if (rand_r(&seed) % 2 == 0)
		std::cout << "ROBOTOMY SUCCESSFUL\n";
	else
		std::cout << "ROBOTOMY FAILED\n";
}

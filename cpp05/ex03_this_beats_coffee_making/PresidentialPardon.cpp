// Copyright (c) 2022 João Rodriguez A.K.A. VLN37. All rights reserved.

#include "PresidentialPardon.hpp"

int PresidentialPardon::req_sign = 25;
int PresidentialPardon::req_exec = 5;

PresidentialPardon::PresidentialPardon(void)
	: Form(req_sign, req_exec), _name(format_name("Form #"))
	, _min_grade(req_sign), _min_exec(req_exec), _signed(false) {
	_target = "NULL";
}

PresidentialPardon::PresidentialPardon(const PresidentialPardon& src)
	: Form(req_sign, req_exec), _name(src.get_name()),
	_min_grade(src.get_grade()), _min_exec(src.get_exec()) {
	*this = src;
}

PresidentialPardon::PresidentialPardon(std::string target)
	: Form(req_sign, req_exec), _name(format_name("Form #"))
	, _min_grade(req_sign), _min_exec(req_exec) {
	this->_target = target;
}

PresidentialPardon::~PresidentialPardon(void) {
	return;
}

const PresidentialPardon&
PresidentialPardon::operator=(const PresidentialPardon& rhs) {
	this->_signed = rhs.is_signed();
	this->_target = rhs._target;
	return *this;
}

void PresidentialPardon::enact(const Form& form) const {
	srand(time(0));
	std::cout << "\n***** PRESIDENTIAL PARDON  REQUEST FORM EXECUTION *****\n\n"
		<< "FORM NAME           : "
		<< form.get_name() << "\n\n"
		<< "PLEB "
		<< this->_target
		<< " HAS BEEN HEREBY PARDONED BY ZAPHOD BEEBLEROX\n";
}

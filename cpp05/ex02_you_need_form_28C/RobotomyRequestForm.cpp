/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 07:45:12 by jofelipe          #+#    #+#             */
/*   Updated: 2022/03/15 07:41:25 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

int RobotomyRequestForm::req_sign = 72;
int RobotomyRequestForm::req_exec = 45;

RobotomyRequestForm::RobotomyRequestForm(void)
: Form(req_sign, req_exec), _name(format_name("Form #"))
, _min_grade(req_sign), _min_exec(req_exec), _signed(false) {
	_target = "NULL";
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src)
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
	return ;
}

const RobotomyRequestForm
	&RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs) {
	this->_signed = rhs.is_signed();
	this->_target = rhs._target;
	return *this;
}

void RobotomyRequestForm::enact(const Form &form) const {
	srand(time(0));
	std::cout << "\n******* ROBOTOMY REQUEST FORM EXECUTION *******\n\n"
			  << "FORM NAME           : "
			  << form.get_name() << "\n"
			  << "TARGET TO ROBOTOMIZE: "
			  << this->_target << "\n\n"
			  << "< UNCOMFORTABLE DRILLING NOISES >\n\n";
	if (rand() % 2 == 0)
		std::cout << "ROBOTOMY SUCCESSFUL\n";
	else
		std::cout << "ROBOTOMY FAILED\n";
}

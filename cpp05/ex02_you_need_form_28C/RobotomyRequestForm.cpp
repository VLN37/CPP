/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 07:45:12 by jofelipe          #+#    #+#             */
/*   Updated: 2022/03/14 12:08:11 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

int RobotomyRequestForm::req_sign = 72;
int RobotomyRequestForm::req_exec = 45;

RobotomyRequestForm::RobotomyRequestForm(void)
: Form(req_sign, req_exec) {
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src)
: Form(req_sign, req_exec) {
	*this = src;
}

RobotomyRequestForm::~RobotomyRequestForm(void) {
	return ;
}

const RobotomyRequestForm
	&RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs) {
	this->_signed = rhs.is_signed();
	return *this;
}

//TODO rand not working properly
void RobotomyRequestForm::enact(const Form &form) const {
	std::cout << "\n******* ROBOTOMY REQUEST FORM EXECUTED *******\n\n";
	std::cout << "FORM NAME: ";
	std::cout << form.get_name() << "\n\n";
	std::cout << "< UNCOMFORTABLE DRILLING NOISES >\n\n";
	if (rand() % 2 == 0)
		std::cout << "ROBOTOMY SUCCESSFUL\n";
	else
		std::cout << "ROBOTOMY FAILED\n";
}

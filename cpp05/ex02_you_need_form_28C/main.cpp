// Copyright (c) 2022 João Rodriguez A.K.A. VLN37. All rights reserved.

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardon.hpp"

int main(void) {
	std::cout << "this compiles\n";

	Form* form = new RobotomyRequestForm;
	Bureaucrat suplicy("suplicy", 30);

	form->beSigned(suplicy);
	suplicy.executeForm(*form);
	delete form;
	form = new ShrubberyCreationForm("casinha do welton");
	suplicy.signForm(*form);
	suplicy.executeForm(*form);
	delete form;
}

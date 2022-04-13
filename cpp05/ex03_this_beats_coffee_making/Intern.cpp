// Copyright (c) 2022 João Rodriguez A.K.A. VLN37. All rights reserved.

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardon.hpp"

std::string Intern::templates[FORM_TYPES] = {
	"shrubbery creation",
	"robotomy request",
	"presidential pardon",
};

Intern::funcptr Intern::fptr[FORM_TYPES] = {
	&Intern::cloneShruberry,
	&Intern::cloneRobotomy,
	&Intern::clonePardon,
};

Intern::Intern(void) {
	return;
}

Intern::Intern(Intern const& intern) {
	*this = intern;
}

Intern::~Intern(void) {
	return;
}

const Intern& Intern::operator=(const Intern& rhs) {
	(void)rhs;
	return *this;
}

Form* Intern::makeForm(std::string name, std::string target) {
	int	i = -1;

	while (++i < FORM_TYPES)
		if (name == Intern::templates[i])
			return (this->*fptr[i])(target);
	std::cout << "Form " << name << " is not a valid template\n";
	return NULL;
}


Form* Intern::cloneShruberry(std::string target) const {
	return new ShrubberyCreationForm(target);
}

Form* Intern::cloneRobotomy(std::string target) const {
	return new RobotomyRequestForm(target);
}

Form* Intern::clonePardon(std::string target) const {
	return new PresidentialPardon(target);
}

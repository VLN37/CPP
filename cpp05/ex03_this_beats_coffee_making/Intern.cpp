/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 05:55:54 by jofelipe          #+#    #+#             */
/*   Updated: 2022/03/15 08:03:53 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardon.hpp"

std::string Intern::templates[FORM_TYPES] = {
	"shrubbery creation",
	"robotomy request",
	"presidential pardon",
};

Intern::Intern(void) {
	return ;
}

Intern::Intern(Intern const &intern) {
	*this = intern;
}

Intern::~Intern(void) {
	return ;
}

const Intern &Intern::operator=(const Intern &rhs) {
	(void)rhs;
	return *this;
}

Form *Intern::makeForm(std::string name, std::string target) {
	int	i = -1;

	while (++i < FORM_TYPES)
		if (name == Intern::templates[i])
			break;

	switch (i) {
		case 0:
			std::cout << "Intern hands you a Shrubbery Creation Form\n";
			return new ShrubberyCreationForm(target);
			break;
		case 1:
			std::cout << "Intern hands you a Robotomy Request Form\n";
			return new RobotomyRequestForm(target);
			break;
		case 2:
			std::cout << "Intern hands you a Presidential Pardon Form\n";
			return new PresidentialPardon(target);
			break;
		default:
			std::cout << "Form "<< name << " is not a valid template\n";
			return NULL;
	}
}

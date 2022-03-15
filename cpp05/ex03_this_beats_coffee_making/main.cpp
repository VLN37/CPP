/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 06:52:33 by jofelipe          #+#    #+#             */
/*   Updated: 2022/03/15 06:41:09 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardon.hpp"

int main(void) {
	std::cout << "this compiles\n";

	Form *form = new RobotomyRequestForm;
	Bureaucrat suplicy("Suplicy", 1);
	Bureaucrat duval("Arthur Duval", 9000);

	form->beSigned(suplicy);
	suplicy.executeForm(*form);
	delete form;
	form = new ShrubberyCreationForm("casinha do welton");
	suplicy.signForm(*form);
	suplicy.executeForm(*form);
	delete form;

	Form *ptr;
	Intern flipflopsguy;

	ptr = flipflopsguy.makeForm("robotomy request", "Alex deLarge");
	ptr->beSigned(suplicy);
	suplicy.executeForm(*ptr);

	delete ptr;
	ptr = flipflopsguy.makeForm("presidential pardon", "OnlyGodCanJudgeMe");

	ptr->beSigned(duval);
	ptr->beSigned(suplicy);
	suplicy.executeForm(*ptr);

	delete ptr;
}

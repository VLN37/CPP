/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 06:52:33 by jofelipe          #+#    #+#             */
/*   Updated: 2022/03/14 11:24:19 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "RobotomyRequestForm.hpp"

int main(void) {
	std::cout << "this compiles\n";

	Form *form = new RobotomyRequestForm;
	Bureaucrat suplicy("suplicy", 30);

	form->beSigned(suplicy);
	suplicy.executeForm(*form);
}

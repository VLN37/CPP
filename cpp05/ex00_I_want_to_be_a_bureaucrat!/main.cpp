/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 06:52:33 by jofelipe          #+#    #+#             */
/*   Updated: 2022/03/13 11:02:48 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void) {
	std::cout << "this compiles\n";

	Bureaucrat suplicy("Suplicy", 0);
	Bureaucrat duval("Duval", 200);

	suplicy++;
	std::cout << suplicy;
}

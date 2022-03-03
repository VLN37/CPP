/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 19:05:52 by jofelipe          #+#    #+#             */
/*   Updated: 2022/03/03 19:15:00 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void) {
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "MEMORY ADDRESS"	<< std::endl
			  << &str				<< std::endl
			  << stringPTR			<< std::endl
			  << &stringREF			<< std::endl;
	std::cout << "VALUE"			<< std::endl
			  << str				<< std::endl
			  << *stringPTR			<< std::endl
			  << str				<< std::endl;
}

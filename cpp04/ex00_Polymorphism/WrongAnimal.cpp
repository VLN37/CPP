/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 04:22:26 by jofelipe          #+#    #+#             */
/*   Updated: 2022/03/11 04:48:20 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) {
	std::cout << "WrongAnimal default constructor called\n";
	this->type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(WrongAnimal &animal) {
	std::cout << "WrongAnimal copy constructor called\n";
	*this = animal;
}

WrongAnimal::~WrongAnimal(void) {
	std::cout << "WrongAnimal destructor called\n";
	return ;
}

void	WrongAnimal::operator=(WrongAnimal &rhs) {
	this->type = rhs.type;
}

void	WrongAnimal::makeSound(void) const {
	std::cout << "This is the wrong function call\n";
}

std::string	WrongAnimal::getType(void) const {
	return this->type;
}

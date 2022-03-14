/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 03:53:21 by jofelipe          #+#    #+#             */
/*   Updated: 2022/03/14 16:56:42 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) {
	std::cout << "Animal default constructor called\n";
	this->type = "Animal";
}

Animal::Animal(Animal &animal) {
	std::cout << "Animal copy constructor called\n";
	*this = animal;
}

Animal::~Animal(void) {
	std::cout << "Animal destructor called\n";
	return ;
}

Animal	&Animal::operator=(Animal &rhs) {
	this->type = rhs.type;
	return *this;
}

void	Animal::makeSound(void) const {
	std::cout << "Err... hi?\n";
}

std::string	Animal::getType(void) const {
	return this->type;
}

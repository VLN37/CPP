/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 04:00:59 by jofelipe          #+#    #+#             */
/*   Updated: 2022/03/11 04:48:14 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) {
	std::cout << "Dog default constructor called\n";
	this->type = "Dog";
}

Dog::Dog(Dog &dog) : Animal() {
	std::cout << "Dog copy constructor called\n";
	*this = dog;
}

Dog::~Dog(void) {
	std::cout << "Dog destructor called\n";
	return ;
}

void	Dog::operator=(Dog &rhs) {
	this->type = rhs.type;
}

void	Dog::makeSound(void) const {
	std::cout << "Whoof! Whoof!\n";
}

std::string	Dog::getType(void) const {
	return this->type;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 03:57:23 by jofelipe          #+#    #+#             */
/*   Updated: 2022/03/14 17:01:49 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) {
	std::cout << "Cat default constructor called\n";
	this->type = "Cat";
	this->ideas = new Brain;
}

Cat::Cat(Cat &cat) : Animal() {
	std::cout << "Cat copy constructor called\n";
	this->ideas = new Brain;
	*this = cat;
}

Cat::~Cat(void) {
	std::cout << "Cat destructor called\n";
	delete this->ideas;
}

Cat	&Cat::operator=(Cat const &rhs) {
	this->type = rhs.type;
	this->ideas = rhs.getBrain();
	return *this;
}

Brain	*Cat::getBrain(void) const {
	return this->ideas;
}

void	Cat::makeSound(void) const {
	std::cout << "Meoow~\n";
}

std::string	Cat::getType(void) const {
	return this->type;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 03:57:23 by jofelipe          #+#    #+#             */
/*   Updated: 2022/03/14 16:57:45 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) {
	std::cout << "Cat default constructor called\n";
	this->type = "Cat";
}

Cat::Cat(Cat &cat) : Animal() {
	std::cout << "Cat copy constructor called\n";
	*this = cat;
}

Cat::~Cat(void) {
	std::cout << "Cat destructor called\n";
	return ;
}

Cat	&Cat::operator=(Cat &rhs) {
	this->type = rhs.type;
	return *this;
}

void	Cat::makeSound(void) const {
	std::cout << "Meoow~\n";
}

std::string	Cat::getType(void) const {
	return this->type;
}

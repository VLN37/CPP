/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 03:57:23 by jofelipe          #+#    #+#             */
/*   Updated: 2022/03/11 08:28:25 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) {
	std::cout << "Cat default constructor called\n";
	this->type = "Cat";
	this->ideas = new Brain;
}

Cat::Cat(Cat &cat) : AAnimal() {
	std::cout << "Cat copy constructor called\n";
	this->ideas = new Brain;
	*this = cat;
}

Cat::~Cat(void) {
	std::cout << "Cat destructor called\n";
	delete this->ideas;
}

void	Cat::operator=(Cat &rhs) {
	this->type = rhs.type;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = rhs.ideas[i];
}

void	Cat::makeSound(void) const {
	std::cout << "Meoow~\n";
}

std::string	Cat::getType(void) const {
	return this->type;
}

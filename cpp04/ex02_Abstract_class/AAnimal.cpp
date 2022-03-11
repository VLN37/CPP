/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 03:53:21 by jofelipe          #+#    #+#             */
/*   Updated: 2022/03/11 08:28:07 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(void) {
	std::cout << "Animal default constructor called\n";
	this->type = "Animal";
}

AAnimal::AAnimal(AAnimal &animal) {
	std::cout << "Animal copy constructor called\n";
	*this = animal;
}

AAnimal::~AAnimal(void) {
	std::cout << "Animal destructor called\n";
	return ;
}

void	AAnimal::operator=(AAnimal &rhs) {
	this->type = rhs.type;
}

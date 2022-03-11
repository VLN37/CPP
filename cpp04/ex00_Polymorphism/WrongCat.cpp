/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 04:21:25 by jofelipe          #+#    #+#             */
/*   Updated: 2022/03/11 04:49:10 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) {
	std::cout << "WrongCat default constructor called\n";
	this->type = "WrongCat";
}

WrongCat::WrongCat(WrongCat &cat) : WrongAnimal() {
	std::cout << "WrongCat copy constructor called\n";
	*this = cat;
}

WrongCat::~WrongCat(void) {
	std::cout << "WrongCat destructor called\n";
	return ;
}

void	WrongCat::operator=(WrongCat &rhs) {
	this->type = rhs.type;
}

void	WrongCat::makeSound(void) const {
	std::cout << "Meoow~\n";
}

std::string	WrongCat::getType(void) const {
	return this->type;
}

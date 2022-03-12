/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 01:26:05 by jofelipe          #+#    #+#             */
/*   Updated: 2022/03/12 09:56:30 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "AMateria.hpp"

Ice::Ice(void) {
	this->_type = "ice";
}

Ice::Ice(Ice const &src) : AMateria(src) {
	*this = src;
}

Ice::~Ice(void) {
	return ;
}

//destructor does not deallocate this you have to do it manually
AMateria *Ice::clone(void) const {
	Ice *tmp = new Ice;
	return tmp;
}

Ice const &Ice::operator=(Ice const &rhs) {
	(void)rhs; //TODO
	return *this;
}

void	Ice::use(ICharacter &target) {
	std::cout << "casts "
			  << this->getType()
			  << " on "
			  << target.getName();
}


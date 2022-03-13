/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 08:17:39 by jofelipe          #+#    #+#             */
/*   Updated: 2022/03/12 13:55:33 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "AMateria.hpp"

Cure::Cure(void) {
	this->_type = "cure";
}

Cure::Cure(Cure const &src) : AMateria(src) {
	*this = src;
}

Cure::~Cure(void) {
	return ;
}

//destructor does not deallocate this you have to do it manually
AMateria *Cure::clone(void) const {
	return new Cure();
}

Cure const &Cure::operator=(Cure const &rhs) {
	this->_type = rhs._type;
	return *this;
}

void	Cure::use(ICharacter &target) {
	std::cout << "heals "
			  << target.getName()
			  << " with "
			  << this->getType() << '\n';
}

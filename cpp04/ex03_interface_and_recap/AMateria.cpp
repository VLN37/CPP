/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 01:08:53 by jofelipe          #+#    #+#             */
/*   Updated: 2022/03/12 11:00:05 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void) {
	this->_type = "hocus pocus";
}

AMateria::AMateria(AMateria const &src) {
	*this = src;
}

AMateria::~AMateria(void) {
	return ;
}

AMateria const &AMateria::operator=(AMateria const &rhs) {
	(void)rhs;
	return *this;
}

std::string const &AMateria::getType(void) const {
	return this->_type;
}

void AMateria::use(ICharacter &target) {
	std::cout << "uses "
			  << this->getType()
			  << " on "
			  << target.getName() << '\n';
}

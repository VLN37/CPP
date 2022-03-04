/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 21:21:45 by jofelipe          #+#    #+#             */
/*   Updated: 2022/03/04 01:51:18 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(void) {
	this->_name.assign("HumanB");
}

HumanB::HumanB(std::string name) {
	this->_name.assign(name);
}

HumanB::~HumanB(void) {
	return ;
}

void HumanB::setWeapon(Weapon &weapon) {
	this->_weapon = &weapon;
}

void HumanB::attack(void) {
	std::cout << this->_name
			  << " attacks with their "
			  << this->_weapon->getType()
			  << std::endl;
}

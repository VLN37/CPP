/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 21:07:19 by jofelipe          #+#    #+#             */
/*   Updated: 2022/03/04 01:52:06 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) :_weapon(weapon) {
	this->_weapon = weapon;
	this->_name.assign(name);
}

HumanA::~HumanA(void) {
	return ;
}


void HumanA::attack(void) {
	std::cout << this->_name
			  << " attacks with their "
			  << this->_weapon.getType()
			  << std::endl;
}

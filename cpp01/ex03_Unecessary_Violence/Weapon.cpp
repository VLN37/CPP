/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 21:00:28 by jofelipe          #+#    #+#             */
/*   Updated: 2022/03/03 23:24:03 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void) {
	this->setType("bloody club");
}

Weapon::Weapon(std::string weapon_name) {
	this->setType(weapon_name);
}

Weapon::~Weapon(void) {
	return ;
}

const std::string &Weapon::getType(void) const {
	return (this->_type);
}

void Weapon::setType(std::string type) {
	this->_type.assign(type);
}

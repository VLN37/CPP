// Copyright (c) 2022 João Rodriguez A.K.A. VLN37. All rights reserved.

#include "HumanB.hpp"

HumanB::HumanB(void) {
	this->_name.assign("HumanB");
}

HumanB::HumanB(std::string name) {
	this->_name.assign(name);
}

HumanB::~HumanB(void) {
	return;
}

void HumanB::setWeapon(Weapon& weapon) {
	this->_weapon = &weapon;
}

void HumanB::attack(void) {
	std::cout << this->_name
			  << " attacks with their "
			  << this->_weapon->getType()
			  << std::endl;
}

// Copyright (c) 2022 João Rodriguez A.K.A. VLN37. All rights reserved.

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon const& weapon) :_weapon(weapon) {
	this->_name.assign(name);
}

HumanA::~HumanA(void) {
	return;
}


void HumanA::attack(void) {
	std::cout << this->_name
			  << " attacks with their "
			  << this->_weapon.getType()
			  << std::endl;
}

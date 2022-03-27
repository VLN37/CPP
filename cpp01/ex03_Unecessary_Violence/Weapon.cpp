// Copyright (c) 2022 João Rodriguez A.K.A. VLN37. All rights reserved.

#include "Weapon.hpp"

Weapon::Weapon(void) {
	this->setType("bloody club");
}

Weapon::Weapon(std::string weapon_name) {
	this->setType(weapon_name);
}

Weapon::~Weapon(void) {
	return;
}

const std::string& Weapon::getType(void) const {
	return (this->_type);
}

void Weapon::setType(std::string type) {
	this->_type.assign(type);
}

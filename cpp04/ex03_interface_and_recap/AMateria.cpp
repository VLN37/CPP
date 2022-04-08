// Copyright (c) 2022 João Rodriguez A.K.A. VLN37. All rights reserved.

#include<string>
#include "AMateria.hpp"

AMateria::AMateria(void) {
	this->_type = "hocus pocus";
}

AMateria::AMateria(AMateria const& src) {
	*this = src;
}

AMateria::~AMateria(void) {
	return;
}

AMateria const& AMateria::operator=(AMateria const& rhs) {
	(void)rhs;
	return *this;
}

std::string const& AMateria::getType(void) const {
	return this->_type;
}

void AMateria::use(ICharacter const& target) {
	std::cout << "uses "
		<< this->getType()
		<< " on "
		<< target.getName() << '\n';
}

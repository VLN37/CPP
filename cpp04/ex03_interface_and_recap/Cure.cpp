// Copyright (c) 2022 João Rodriguez A.K.A. VLN37. All rights reserved.

#include "Cure.hpp"
#include "AMateria.hpp"

Cure::Cure(void) {
	this->_type = "cure";
}

Cure::Cure(Cure const& src) : AMateria(src) {
	*this = src;
}

Cure::~Cure(void) {
	return;
}

//destructor does not deallocate this you have to do it manually
AMateria* Cure::clone(void) const {
	return new Cure();
}

Cure const& Cure::operator=(Cure const& rhs) {
	this->_type = rhs._type;
	return *this;
}

void	Cure::use(ICharacter const& const target) {
	std::cout << "heals "
			  << target.getName()
			  << " with "
			  << this->getType() << '\n';
}

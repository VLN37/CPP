// Copyright (c) 2022 João Rodriguez A.K.A. VLN37. All rights reserved.

#include "Ice.hpp"
#include "AMateria.hpp"

Ice::Ice(void) {
	this->_type = "ice";
}

Ice::Ice(Ice const& src) : AMateria(src) {
	*this = src;
}

Ice::~Ice(void) {
	return;
}

//destructor does not deallocate this you have to do it manually
AMateria* Ice::clone(void) const {
	Ice* tmp = new Ice;
	return tmp;
}

Ice const& Ice::operator=(Ice const& rhs) {
	(void)rhs; //TODO(me)
	return *this;
}

void	Ice::use(const ICharacter& target) {
	std::cout << "casts "
		<< this->getType()
		<< " on "
		<< target.getName() << '\n';
}


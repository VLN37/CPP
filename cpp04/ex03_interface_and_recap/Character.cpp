// Copyright (c) 2022 João Rodriguez A.K.A. VLN37. All rights reserved.

#include "Character.hpp"

Character::Character(void) {
	this->_name = "Teh Dood";
}

Character::Character(std::string name) {
	this->_name = name;
}

Character::Character(Character const& src) {
	*this = src;
}

Character::~Character(void) {
	int i = -1;
	while (++i < 4) {
		delete this->book.spells[i];
	}
}

Character const& Character::operator=(Character const& rhs) {
	this->_name = rhs.getName();
	this->book = rhs.book;
	return *this;
}

void	Character::equip(AMateria* m) {
	int	i = 0;

	while (this->book.spells[i] && i < 4)
		i++;
	if (i == 4) {
		this->book.store(m);
		return print_error("Cannot equip. Spellbook is full\n");
	}
	this->book.spells[i] = m;
	std::cout << "Spell succesfully equipped\n";
}

void	Character::unequip(int idx) {
	if (idx >= 0 && idx <= 3)
		this->book.spells[idx] = NULL;
}

std::string const& Character::getName(void) const {
	return this->_name;
}

void	Character::use(int idx, ICharacter const& target) {
	if (idx < 0 || idx > 3)
		return print_error("Inventory only has slots 0 - 3\n");
	if (!this->book.spells[idx])
		return print_error("No spells registered in this inventory slot\n");
	this->book.spells[idx]->use(target);
}

void	Character::print_error(std::string error) {
	std::cout << error;
}

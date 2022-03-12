/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 01:53:34 by jofelipe          #+#    #+#             */
/*   Updated: 2022/03/12 09:25:24 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void) {
	this->_name = "Teh Dood";
}

Character::Character(std::string name) {
	this->_name = name;
}

Character::Character(Character const &src) {
	*this = src;
}

Character::~Character(void) {
	int i = -1;
	while (++i < 4) {
		delete this->book.spells[i];
	}
}

Character const &Character::operator=(Character const &rhs) {
	this->_name = rhs.getName();
	return *this;
}

void	Character::equip(AMateria *m) {
	(void)m;
	return ; //TODO
}

void	Character::unequip(int idx) {
	(void)idx;
	return ; //TODO
}

std::string const &Character::getName(void) const {
	return this->_name;
}

void	Character::use(int idx, ICharacter &target) {
	if (idx < 0 || idx > 3)
		return print_error("Inventory only has slots 0 - 3\n");
	if (!this->book.spells[idx])
		return print_error("No spells registered in this inventory slot\n");
	this->book.spells[idx]->use(target);
}

void	Character::print_error(std::string error) {
	std::cout << error;
}

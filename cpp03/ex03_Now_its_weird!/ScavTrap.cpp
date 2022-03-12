/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 04:50:02 by jofelipe          #+#    #+#             */
/*   Updated: 2022/03/11 23:58:35 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) {
	std::cout << "default ScavTrap constructor has been called\n";
	name.assign("Mr.ScavTrap");
	_type.assign("ScavTrap");
}

ScavTrap::ScavTrap(std::string name) {
	std::cout << "string ScavTrap constructor has been called\n";
	this->name = name;
	_type.assign("ScavTrap");
}

ScavTrap::ScavTrap(ScavTrap &src) : ClapTrap(src) {
	std::cout << "copy ScavTrap constructor has been called\n";
	*this = src;
}

ScavTrap::~ScavTrap(void) {
	std::cout << "ScavTrap destructor has been called\n";
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &rhs) {
	this->name = rhs.name;
	this->hit_points = rhs.hit_points;
	this->energy_points = rhs.energy_points;
	this->attack_damage = rhs.attack_damage;
	return *this;
}

void	ScavTrap::guardGate(void) const {
	if (this->hit_points < 1)
		std::cout << "Cannot enter Guard Gate mode, he is already dead\n";
	std::cout << "ScavTrap is now in Guard Gate mode\n";
}

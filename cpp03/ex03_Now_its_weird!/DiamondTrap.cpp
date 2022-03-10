/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 04:50:02 by jofelipe          #+#    #+#             */
/*   Updated: 2022/03/10 20:11:12 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) {
	std::cout << "default DiamondTrap constructor has been called\n";
	name.assign("Mr.DiamondTrap");
	_type.assign("DiamondTrap");
	this->hit_points = FragTrap::hit_points;
	this->energy_points = ClapTrap::energy_points;
	this->attack_damage = FragTrap::attack_damage;
}

DiamondTrap::DiamondTrap(std::string name) {
	std::cout << "string DiamondTrap constructor has been called\n";
	_type.assign("DiamondTrap");
	this->name = name;
	ClapTrap::name = name + "_clap_trap";
	this->hit_points = FragTrap::hit_points;
	this->energy_points = ScavTrap::energy_points;
	std::cout << this->energy_points << "my energy points\n";
	this->attack_damage = FragTrap::attack_damage;
}

DiamondTrap::DiamondTrap(DiamondTrap &src)
	: ClapTrap(src), ScavTrap(src), FragTrap(src) {
	std::cout << "copy DiamondTrap constructor has been called\n";
	*this = src;
}

DiamondTrap::~DiamondTrap(void) {
	std::cout << "DiamondTrap destructor has been called\n";
}

DiamondTrap	&DiamondTrap::operator=(DiamondTrap const &rhs) {
	this->name = rhs.name;
	this->hit_points = rhs.hit_points;
	this->energy_points = rhs.energy_points;
	this->attack_damage = rhs.attack_damage;
	this->_type = rhs._type;
	return *this;
}

void	DiamondTrap::attack(const std::string &target) {
	this->_type = "ScavTrap";
	ScavTrap::attack(target);
	this->_type = "DiamondTrap";
}

void	DiamondTrap::WhoAmI(void) const {
	std::cout << "My name is: "
			  << this->name
			  << "\nMy ClapTrap name is: "
			  << ClapTrap::name << '\n';
}

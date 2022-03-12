/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 04:50:02 by jofelipe          #+#    #+#             */
/*   Updated: 2022/03/12 04:27:57 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) {
	std::cout << "default DiamondTrap constructor has been called\n";
	_name.assign("Mr.DiamondTrap");
	_type.assign("DiamondTrap");
	ClapTrap::_name = _name + "_clap_trap";
	this->hit_points = FragTrap::hit_points;
	this->energy_points = ClapTrap::energy_points_base;
	this->attack_damage = FragTrap::attack_damage;
}

DiamondTrap::DiamondTrap(std::string name)
	//explicitly call the parametric constructor
	: ClapTrap(name), ScavTrap(name), FragTrap(name) {
	std::cout << "string DiamondTrap constructor has been called\n";
	_type.assign("DiamondTrap");
	this->_name = name;
	ClapTrap::_name = name + "_clap_trap";
	this->hit_points = FragTrap::hit_points;
	this->energy_points = ClapTrap::energy_points_base;
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
	this->_name = rhs._name;
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

std::string	DiamondTrap::get_name(void) const {
	return this->_name;
}

void	DiamondTrap::WhoAmI(void) const {
	if (this->hit_points < 1)
		std::cout << "Cannot speak, he is already dead\n";
	std::cout << "My name is: "
			  << this->get_name()
			  << "\nMy ClapTrap name is: "
			  << ClapTrap::get_name() << '\n';
}

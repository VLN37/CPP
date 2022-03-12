/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 04:50:02 by jofelipe          #+#    #+#             */
/*   Updated: 2022/03/11 23:59:05 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) {
	std::cout << "default DiamondTrap constructor has been called\n";
	name.assign("Mr.DiamondTrap");
	_type.assign("DiamondTrap");
	this->hit_points = FragTrap::hit_points;
	this->energy_points = ScavTrap::energy_points;
	this->attack_damage = FragTrap::attack_damage;
}

DiamondTrap::DiamondTrap(std::string name)
	//explicitly call the parametric constructor
	: ClapTrap(name), ScavTrap(name), FragTrap(name) {
	std::cout << "string DiamondTrap constructor has been called\n";
	_type.assign("DiamondTrap");
	ClapTrap::name = name;
	this->name = name + "_clap_trap";
	this->hit_points = FragTrap::hit_points;
	this->energy_points = ClapTrap::energy_points_base;
	this->attack_damage = FragTrap::attack_damage;
	// std::cout << this->energy_points << " diamond energy_points\n";
	// std::cout << ClapTrap::energy_points_base << " clap energy_points\n";
	// std::cout << FragTrap::energy_points << " frag energy_points\n";
	// std::cout << ScavTrap::energy_points << " scav energy_points\n\n";
	// std::cout << this->hit_points << " diamond hit_points\n";
	// std::cout << ClapTrap::hit_points << " clap hit_points\n";
	// std::cout << FragTrap::hit_points << " frag hit_points\n";
	// std::cout << ScavTrap::hit_points << " scav hit_points\n\n";
	// std::cout << this->attack_damage << " diamond attack_damage\n";
	// std::cout << ClapTrap::attack_damage << " clap attack_damage\n";
	// std::cout << FragTrap::attack_damage << " frag attack_damage\n";
	// std::cout << ScavTrap::attack_damage << " scav attack_damage\n\n";
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
	if (this->hit_points < 1)
		std::cout << "Cannot speak, he is already dead\n";
	std::cout << "My name is: "
			  << ClapTrap::name
			  << "\nMy ClapTrap name is: "
			  << this->name << '\n';
}

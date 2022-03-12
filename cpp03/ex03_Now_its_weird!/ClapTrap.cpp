/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 00:22:40 by jofelipe          #+#    #+#             */
/*   Updated: 2022/03/11 23:58:06 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) {
	std::cout << "default ClapTrap constructor has been called\n";

	this->name.assign("Mr. ClapTrap");
	this->_type.assign("ClapTrap");
	this->hit_points = 100;
	this->energy_points = 50;
	this->energy_points_base = 50;
	this->attack_damage = 20;
}

ClapTrap::ClapTrap(std::string name) {
	std::cout << "string ClapTrap constructor has been called\n";
	this->name.assign(name);
	this->_type.assign("ClapTrap");
	this->hit_points = 100;
	this->energy_points = 50;
	this->energy_points_base = 50;
	this->attack_damage = 20;
}

ClapTrap::ClapTrap(ClapTrap &src) {
	std::cout << "copy ClapTrap constructor has been called\n";
	*this = src;
}

ClapTrap::~ClapTrap(void) {
	std::cout << "ClapTrap destructor has been called\n";
}

ClapTrap	&ClapTrap::operator=(ClapTrap &rhs) {
	this->name = rhs.get_name();
	this->hit_points = rhs.get_hit_pts();
	this->energy_points = rhs.get_energy_pts();
	this->attack_damage = rhs.get_attack_dmg();
	return *this;
}

std::string	ClapTrap::get_name(void) const {
	return this->name;
}

int	ClapTrap::get_attack_dmg(void) const {
	return this->attack_damage;
}

int	ClapTrap::get_energy_pts(void) const {
	return this->energy_points;
}

int	ClapTrap::get_hit_pts(void) const {
	return this->hit_points;
}

void	ClapTrap::print_error(std::string err) {
	std::cout << err;
	return ;
}

void	ClapTrap::print_debug(void) const {
	std::cout << "My class type is: "
			  << this->_type << '\n'
			  << "Name            : "
			  << this->name << '\n'
			  << "Hit Points      : "
			  << this->hit_points << '\n'
			  << "Energy Points   : "
			  << this->energy_points << '\n'
			  << "Attack Damage   : "
			  << this->attack_damage << "\n\n";
}

void	ClapTrap::attack(const std::string &target) {
	if (this->hit_points < 1)
		return print_error(this->get_name() + " cannot attack. I am dead\n");
	if (this->energy_points < 1)
		return print_error(this->name + " cannot attack. I have no energy\n");
	this->energy_points--;
	std::cout << this->_type
			  << " "
			  << this->name
			  << " attacks "
			  << target
			  << " causing "
			  << this->attack_damage
			  << " points of damage!\n";
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if (this->hit_points < 1)
		return print_error (this->name + " is already dead\n");
	this->hit_points -= amount;
	if (this->hit_points < 1)
		return print_error (this->name + " has died\n");
	std::cout << this->name
			  << " was attacked and now has "
			  << this->hit_points
			  << " health points\n";
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (this->hit_points < 1)
		return print_error(this->name + " cannot heal. I am dead\n");
	if (this->energy_points < 1)
		return print_error(this->name + " cannot heal. I have no energy\n");
	this->energy_points--;
	this->hit_points += amount;
	std::cout << this->_type
			  << " "
			  << this->name
			  << " is repaired by "
			  << amount
			  << " health points\n";
}

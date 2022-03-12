/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 04:50:02 by jofelipe          #+#    #+#             */
/*   Updated: 2022/03/11 23:58:24 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) {
	std::cout << "default FragTrap constructor has been called\n";
	name.assign("Mr.FragTrap");
	_type.assign("FragTrap");
	this->energy_points = 100;
	this->attack_damage = 30;
}

FragTrap::FragTrap(std::string name) {
	std::cout << "string FragTrap constructor has been called\n";
	_type.assign("FragTrap");
	this->name = name;
	this->energy_points = 100;
	this->attack_damage = 30;
}

FragTrap::FragTrap(FragTrap &src) : ClapTrap(src) {
	std::cout << "copy FragTrap constructor has been called\n";
	*this = src;
}

FragTrap::~FragTrap(void) {
	std::cout << "FragTrap destructor has been called\n";
}

FragTrap	&FragTrap::operator=(FragTrap const &rhs) {
	this->name = rhs.name;
	this->hit_points = rhs.hit_points;
	this->energy_points = rhs.energy_points;
	this->attack_damage = rhs.attack_damage;
	this->_type = rhs._type;
	return *this;
}

void	FragTrap::highFiveGuys(void) const {
	if (this->hit_points < 1)
		std::cout << "Cannot HighFive mode, he is already dead\n";
	std::cout << this->name << " throws a HighFive. Very wow.\n";
}

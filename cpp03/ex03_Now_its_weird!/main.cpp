/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 02:07:12 by jofelipe          #+#    #+#             */
/*   Updated: 2022/03/10 20:03:51 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void) {
	ClapTrap	robot1("Robot3");
	ScavTrap	robot2("Robot2");
	FragTrap	robot3("Robot1");
	DiamondTrap	robot4("Robot4");

	// robot3.attack(robot2.get_name());
	// robot2.takeDamage(robot3.get_attack_dmg());
	// robot1.attack(robot2.get_name());
	// robot2.takeDamage(robot1.get_attack_dmg());
	// robot1.beRepaired(2);
	// robot2.guardGate();
	// robot1.highFiveGuys();
	robot4.attack(robot1.get_name());

	robot1.print_debug();
	robot2.print_debug();
	robot3.print_debug();
	robot4.print_debug();
	robot4.WhoAmI();
}

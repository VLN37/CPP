/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 02:07:12 by jofelipe          #+#    #+#             */
/*   Updated: 2022/03/10 03:00:06 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void) {
	ScavTrap robot1("Robot1");
	ScavTrap robot2("Robot2");
	ClapTrap robot3("Robot3");

	robot3.attack(robot2.get_name());
	robot2.takeDamage(robot3.get_attack_dmg());
	robot1.attack(robot2.get_name());
	robot2.takeDamage(robot1.get_attack_dmg());
	robot1.beRepaired(2);
	robot1.guardGate();
}

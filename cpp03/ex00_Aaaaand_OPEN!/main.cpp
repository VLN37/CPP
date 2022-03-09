/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 02:07:12 by jofelipe          #+#    #+#             */
/*   Updated: 2022/03/09 03:35:12 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void) {
	ClapTrap robot1("Robot1");
	ClapTrap robot2("Robot2");
	ClapTrap robot3(robot1);

	robot1.attack(robot2.get_name());
	robot2.takeDamage(robot1.get_attack_dmg());
	while (robot2.get_energy_pts() > 0)
		robot2.beRepaired(2);
	robot2.beRepaired(2);
}

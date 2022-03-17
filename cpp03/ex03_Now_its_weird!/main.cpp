// Copyright (c) 2022 João Rodriguez A.K.A. VLN37. All rights reserved.

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void) {
	ClapTrap	robot1("Robot1");
	ScavTrap	robot2("Robot2");
	FragTrap	robot3("Robot3");
	DiamondTrap	robot4("Robot4");

	// robot3.attack(robot2.get_name());
	// robot2.takeDamage(robot3.get_attack_dmg());
	// robot1.attack(robot2.get_name());
	// robot2.takeDamage(robot1.get_attack_dmg());
	// robot1.beRepaired(2);
	// robot2.guardGate();
	// robot1.highFiveGuys();

	robot1.print_debug();
	robot2.print_debug();
	robot3.print_debug();
	robot4.print_debug();
	robot4.attack(robot1.get_name());
	robot4.takeDamage(20);
	robot4.beRepaired(10);
	robot4.WhoAmI();
}

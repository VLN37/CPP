// Copyright (c) 2022 João Rodriguez A.K.A. VLN37. All rights reserved.

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void) {
	FragTrap robot1("Robot1");
	ScavTrap robot2("Robot2");
	ClapTrap robot3("Robot3");

	robot3.attack(robot2.get_name());
	robot2.takeDamage(robot3.get_attack_dmg());
	robot1.attack(robot2.get_name());
	robot2.takeDamage(robot1.get_attack_dmg());
	robot1.beRepaired(2);
	robot2.guardGate();
	robot1.highFiveGuys();
}

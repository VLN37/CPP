// Copyright (c) 2022 João Rodriguez A.K.A. VLN37. All rights reserved.

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

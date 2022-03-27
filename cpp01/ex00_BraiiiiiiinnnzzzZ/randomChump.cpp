// Copyright (c) 2022 João Rodriguez A.K.A. VLN37. All rights reserved.

#include "Zombie.hpp"

void	Zombie::randomChump(std::string name) {
	Zombie chump(name);
	chump.announce();
}

void	randomChump(std::string name) {
	Zombie chump(name);
	chump.announce();
}

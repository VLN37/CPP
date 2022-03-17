// Copyright (c) 2022 João Rodriguez A.K.A. VLN37. All rights reserved.

#include "Zombie.hpp"

Zombie	*Zombie::newZombie(std::string name) {
	return (new Zombie(name));
}

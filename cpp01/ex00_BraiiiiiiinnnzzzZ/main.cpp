// Copyright (c) 2022 João Rodriguez A.K.A. VLN37. All rights reserved.

#include "Zombie.hpp"

int	main(void) {
	Zombie stackzombie("bro");
	Zombie* heapzombie;

	heapzombie = stackzombie.newZombie("joe");
	stackzombie.announce();
	heapzombie->announce();
	stackzombie.randomChump("billy");

	delete heapzombie;
}

// Copyright (c) 2022 João Rodriguez A.K.A. VLN37. All rights reserved.

#include "Zombie.hpp"

int	main(void) {
	Zombie* horde;

	horde = zombieHorde(5, "billy");
	for (int i = 0; i < 5; i++)
		horde[i].announce();
	delete[] horde;
}


// Copyright (c) 2022 João Rodriguez A.K.A. VLN37. All rights reserved.

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name) {
	Zombie* horde = new Zombie[N];
	for (int i = 0; i < N; i++)
		horde[i].setname(name);
	return (horde);
}

// Copyright (c) 2022 João Rodriguez A.K.A. VLN37. All rights reserved.

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {
public:
	Zombie(void);
	Zombie(std::string name);
	~Zombie(void);

	Zombie* newZombie(std::string name);
	void	randomChump(std::string name);
	void	setname(std::string name);
	void	announce(void);

private:
	std::string name;
};

Zombie* zombieHorde(int N, std::string name);

#endif

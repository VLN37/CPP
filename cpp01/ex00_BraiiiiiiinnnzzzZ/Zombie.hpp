// Copyright (c) 2022 João Rodriguez A.K.A. VLN37. All rights reserved.

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {
public:
	Zombie(std::string name);
	~Zombie(void);

	//can be called as Zombie::randomChump()
	static void	randomChump(std::string name);
	Zombie* newZombie(std::string name);
	void	announce(void);

private:
	std::string name;
};

//non member function outside namespace
void	randomChump(std::string name);

#endif

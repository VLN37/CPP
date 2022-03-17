// Copyright (c) 2022 João Rodriguez A.K.A. VLN37. All rights reserved.

#include "Zombie.hpp"

Zombie::Zombie(std::string name) {
	this->name = name;
}

Zombie::~Zombie(void) {
	std::cout << "Destructor called: "
			  << this->name
			  << std::endl;
}

void	Zombie::announce(void) {
	std::cout << this->name
			  << ": BraiiiiiiinnnzzzZ..."
			  << std::endl;
}

// Copyright (c) 2022 João Rodriguez A.K.A. VLN37. All rights reserved.

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB {

public:
	HumanB(void);
	HumanB(std::string name);
	~HumanB(void);

	void attack(void);
	void setWeapon(Weapon& weapon);

private:
	std::string	_name;
	Weapon* _weapon;
};

#endif

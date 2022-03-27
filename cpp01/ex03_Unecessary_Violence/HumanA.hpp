// Copyright (c) 2022 João Rodriguez A.K.A. VLN37. All rights reserved.

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA {

public:
	HumanA(void);
	HumanA(std::string name, Weapon const& weapon);
	~HumanA(void);

	void attack(void);

private:
	std::string		_name;
	Weapon const&	_weapon;

};

#endif

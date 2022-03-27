// Copyright (c) 2022 João Rodriguez A.K.A. VLN37. All rights reserved.

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon {

public:
	Weapon(void);
	Weapon(std::string weapon_name);
	~Weapon(void);

	const std::string& getType(void) const;
	void setType(std::string type);

private:
	std::string _type;
};

#endif

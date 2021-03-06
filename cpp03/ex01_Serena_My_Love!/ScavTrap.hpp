// Copyright (c) 2022 João Rodriguez A.K.A. VLN37. All rights reserved.

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
public:
	ScavTrap(void);
	ScavTrap(std::string name);
	ScavTrap(ScavTrap& src);
	~ScavTrap(void);

	ScavTrap& operator=(ScavTrap const& src);

	void		guardGate(void) const;
};

#endif

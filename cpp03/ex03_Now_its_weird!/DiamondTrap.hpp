// Copyright (c) 2022 João Rodriguez A.K.A. VLN37. All rights reserved.

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include <iostream>
#include <string>
#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap
	: public ScavTrap, public FragTrap, virtual public ClapTrap {
public:
	DiamondTrap(void);
	DiamondTrap(std::string name);
	DiamondTrap(DiamondTrap& src);
	~DiamondTrap(void);

	DiamondTrap& operator=(DiamondTrap const& src);

	void		WhoAmI(void) const;
	void		attack(const std::string& target);
	virtual std::string get_name(void) const;


private:
	std::string	_name;
};

#endif

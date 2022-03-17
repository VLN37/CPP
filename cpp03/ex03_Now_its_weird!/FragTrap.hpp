// Copyright (c) 2022 João Rodriguez A.K.A. VLN37. All rights reserved.

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
public:
	FragTrap(void);
	FragTrap(std::string name);
	FragTrap(FragTrap& src);
	~FragTrap(void);

	FragTrap& operator=(FragTrap const& src);

	void		highFiveGuys(void) const;
};

#endif

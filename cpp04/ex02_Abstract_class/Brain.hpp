// Copyright (c) 2022 João Rodriguez A.K.A. VLN37. All rights reserved.

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>

class Brain {
public:
	Brain(void);
	Brain(Brain& brain);
	~Brain(void);

	Brain& operator=(Brain const& rhs);

	std::string	ideas[100];
};

#endif

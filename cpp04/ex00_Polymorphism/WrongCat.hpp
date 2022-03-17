// Copyright (c) 2022 João Rodriguez A.K.A. VLN37. All rights reserved.

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include <iostream>
#include <string>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
public:
	WrongCat(void);
	WrongCat(WrongCat& cat);
	~WrongCat(void);

	void	operator=(WrongCat& rhs);

	void			makeSound(void) const;
	std::string		getType(void) const;
};

#endif

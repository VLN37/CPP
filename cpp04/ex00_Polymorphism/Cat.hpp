// Copyright (c) 2022 João Rodriguez A.K.A. VLN37. All rights reserved.

#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"

class Cat : public Animal {
public:
	Cat(void);
	Cat(Cat& cat);
	~Cat(void);

	Cat& operator=(Cat& rhs);

	virtual void	makeSound(void) const;
	std::string		getType(void) const;
};

#endif

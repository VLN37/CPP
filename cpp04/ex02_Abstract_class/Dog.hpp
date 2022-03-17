// Copyright (c) 2022 João Rodriguez A.K.A. VLN37. All rights reserved.

#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include <string>
#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal {
public:
	Dog(void);
	Dog(const Dog& dog);
	~Dog(void);

	Dog& operator=(const Dog& rhs);

	virtual void	makeSound(void) const;
	std::string		getType(void) const;

private:
	Brain* ideas;
};

#endif

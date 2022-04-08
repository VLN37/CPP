// Copyright (c) 2022 João Rodriguez A.K.A. VLN37. All rights reserved.

#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
public:
	Dog(void);
	Dog(Dog const& src);
	virtual ~Dog(void);

	Dog& operator=(Dog const& rhs);

	virtual void	makeSound(void) const;
	std::string		getType(void) const;

private:
	Brain*			ideas;
};

#endif

// Copyright (c) 2022 João Rodriguez A.K.A. VLN37. All rights reserved.

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal {
public:
	Animal(void);
	Animal(Animal& animal);
	virtual ~Animal(void);

	Animal& operator=(Animal const& rhs);

	virtual void	makeSound(void) const;
	std::string		getType(void) const;

protected:
	std::string	type;
};

#endif

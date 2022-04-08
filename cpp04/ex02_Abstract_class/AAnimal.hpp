// Copyright (c) 2022 João Rodriguez A.K.A. VLN37. All rights reserved.

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

#include <iostream>
#include <string>

class AAnimal {
public:
	AAnimal(void);
	AAnimal(AAnimal const& animal);
	virtual ~AAnimal(void);

	AAnimal& operator=(AAnimal const& rhs);

	virtual void		makeSound(void) const = 0;
	virtual std::string	getType(void) const = 0;

protected:
	std::string	type;
};

#endif

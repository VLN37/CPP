// Copyright (c) 2022 João Rodriguez A.K.A. VLN37. All rights reserved.

#ifndef CURE_HPP
# define CURE_HPP

#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria {
public:
	Cure(void);
	Cure(Cure const& src);
	~Cure(void);

	Cure const& operator=(Cure const& rhs);

	AMateria* clone(void) const;
	virtual void use(ICharacter const& const target);
};


#endif

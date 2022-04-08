// Copyright (c) 2022 João Rodriguez A.K.A. VLN37. All rights reserved.

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
#include <string>
#include "ICharacter.hpp"

class ICharacter;

class AMateria {
public:
	AMateria(void);
	AMateria(AMateria const& src);
	AMateria(std::string const& type);
	virtual ~AMateria(void);

	AMateria const& operator=(AMateria const& rhs);

	std::string const& getType(void) const;
	virtual AMateria* clone(void) const = 0;
	virtual void use(ICharacter const& target);

protected:
	std::string _type;
};

#endif

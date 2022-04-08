// Copyright (c) 2022 João Rodriguez A.K.A. VLN37. All rights reserved.

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <iostream>
#include <string>
#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "MateriaSource.hpp"

class AMateria;
class ICharacter;

class Character : public ICharacter {

public:
	Character(void);
	Character(Character const& src);
	Character(std::string name);
	virtual ~Character(void);

	Character const& operator=(Character const& rhs);

	virtual std::string const& getName(void) const;
	virtual void equip(AMateria* m);
	virtual void unequip(int idx);
	virtual void use(int idx, ICharacter const& target);

private:
	MateriaSource	book;
	std::string		_name;

	void	print_error(std::string error);
};

#endif

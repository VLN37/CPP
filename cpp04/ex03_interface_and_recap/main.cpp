// Copyright (c) 2022 João Rodriguez A.K.A. VLN37. All rights reserved.

#include "ICharacter.hpp"
#include "Character.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int	main(void) {
	ICharacter*		me = new Character("me");
	IMateriaSource*	src = new MateriaSource;
	AMateria*		tmp;

	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	delete me;
	delete src;
	delete bob;
}

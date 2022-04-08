// Copyright (c) 2022 João Rodriguez A.K.A. VLN37. All rights reserved.

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) {
	for (int i = 0; i < 4; i++)
		this->spells[i] = NULL;
	for (int i = 0; i < 100; i++)
		this->known_spells[i] = NULL;
	this->index = 0;
}

MateriaSource::MateriaSource(MateriaSource const& src) {
	*this = src;
}

MateriaSource::~MateriaSource(void) {
	int i = -1;
	while (this->known_spells[++i])
		delete this->known_spells[i];
}

MateriaSource const& MateriaSource::operator=(MateriaSource const& rhs) {
	for (int i = 0; i < 4; i++)
		if (rhs.spells[i]) {
			this->spells[i] = rhs.spells[i]->clone();
			this->known_spells[i] = this->spells[i];
		}
	return *this;
}

AMateria* MateriaSource::createMateria(std::string const& type) {
	for (int i = 0; i < 4; i++) {
		if (this->spells[i] && !type.compare(this->spells[i]->getType())) {
			std::cout << "Materia succesfully created\n";
			return spells[i]->clone();
		}
	}
	std::cout << "Materia not found in your Materia Source\n";
	return NULL;
}

void MateriaSource::learnMateria(AMateria* matptr) {
	for (int i = 0; i < 4; i++) {
		if (!this->spells[i]) {
			std::cout << matptr->getType()
					  << " Materia acquired!\n";
			this->spells[i] = matptr;
			this->known_spells[index++] = this->spells[i];
			return;
		}
	}
	delete matptr;
	std::cout << "Cannot learn materia. This Materia Source is full\n";
}

AMateria* MateriaSource::find(std::string const type) {
	int i = -1;
	while (this->known_spells[++i])
		if (!type.compare(this->known_spells[i]->getType()))
			return (this->known_spells[i]);
	return NULL;
}

void	MateriaSource::store(AMateria* m) {
	int i = -1;
	while (this->known_spells[++i])
		if (known_spells[i] == m)
			return;
	this->known_spells[i] = m;
}

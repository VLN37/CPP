/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 03:04:50 by jofelipe          #+#    #+#             */
/*   Updated: 2022/03/12 09:56:17 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) {
	for(int i = 0; i < 4; i++)
		this->spells[i] = NULL;
	for(int i = 0; i < 100; i++)
		this->known_spells[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const &src) {
	*this = src;
}

MateriaSource::~MateriaSource(void) {
	int i = -1;
	while (this->known_spells[++i])
		delete this->known_spells[i];
}

MateriaSource const &MateriaSource::operator=(MateriaSource const &rhs) {
	for(int i = 0; i < 4; i++)
		if (rhs.spells[i])
			this->spells[i] = rhs.spells[i]->clone();
	int i = -1;
	while (rhs.known_spells[++i])
		delete rhs.known_spells[i];
	return *this;
}

AMateria *MateriaSource::createMateria(std::string const & type) {
	for (int i = 0; i < 4; i++) {
		if (this->spells[i] && !type.compare(this->spells[i]->getType())) {
			std::cout << "Materia succesfully created\n";
			return spells[i]->clone();
		}
	}
	std::cout << "Materia not found in your Materia Source\n";
	return NULL;
}

void MateriaSource::learnMateria(AMateria *matptr) {
	for (int i = 0; i < 4; i++)
		if (!this->spells[i])
		{
			std::cout <<  matptr->getType()
					  << " Materia acquired!\n";
			this->spells[i] = matptr->clone();
			return ;
		}
	std::cout << "Cannot learn materia. This Materia Source is full\n";
}

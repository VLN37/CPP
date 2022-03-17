// Copyright (c) 2022 João Rodriguez A.K.A. VLN37. All rights reserved.

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include <string>
#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource {

	public:
		MateriaSource(void);
		MateriaSource(MateriaSource const &src);
		virtual ~MateriaSource(void);

		MateriaSource const &operator=(MateriaSource const &rhs);
		virtual void learnMateria(AMateria *matptr);
		virtual AMateria* createMateria(std::string const & type);
		AMateria	*find(std::string const type);
		void		store(AMateria *m);

		AMateria	*spells[4];

	private:
		AMateria	*known_spells[100];
		int			index;
};

#endif

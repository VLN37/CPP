/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 01:49:03 by jofelipe          #+#    #+#             */
/*   Updated: 2022/03/12 09:24:20 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "MateriaSource.hpp"

class AMateria;
class ICharacter;

class Character : public ICharacter {

	public:
		Character(void);
		Character(Character const &src);
		Character(std::string name);
		virtual ~Character(void);

		Character const &operator=(Character const &rhs);

		virtual std::string const &getName(void) const;
		virtual void equip(AMateria *m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter& target);

	private:
		MateriaSource	book;
		std::string		_name;

		void	print_error(std::string error);
};

#endif

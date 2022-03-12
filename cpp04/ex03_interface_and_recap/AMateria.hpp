/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 01:07:13 by jofelipe          #+#    #+#             */
/*   Updated: 2022/03/12 11:00:49 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria {

	public:
		AMateria(void);
		AMateria(AMateria const &src);
		AMateria(std::string const &type);
		virtual ~AMateria(void);

		AMateria const &operator=(AMateria const &rhs);

		std::string const &getType(void) const;
		virtual AMateria* clone(void) const = 0;
		virtual void use(ICharacter &target);

	protected:
		std::string _type;
};

#endif

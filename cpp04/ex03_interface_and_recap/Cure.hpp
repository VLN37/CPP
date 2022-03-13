/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 08:16:29 by jofelipe          #+#    #+#             */
/*   Updated: 2022/03/12 13:56:12 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria {

	public:
		Cure(void);
		Cure(Cure const &src);
		~Cure(void);

		Cure const &operator=(Cure const &rhs);

		AMateria* clone(void) const;
		virtual void use(ICharacter& target);
};


#endif

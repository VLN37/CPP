/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 01:21:25 by jofelipe          #+#    #+#             */
/*   Updated: 2022/03/12 02:24:54 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria {

	public:
		Ice(void);
		Ice(Ice const &src);
		~Ice(void);

		Ice const &operator=(Ice const &rhs);

		virtual AMateria* clone(void) const;
		virtual void use(ICharacter& target);
};

#endif

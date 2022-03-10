/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 04:45:46 by jofelipe          #+#    #+#             */
/*   Updated: 2022/03/10 02:52:18 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

	public:
		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(ScavTrap &src);
		~ScavTrap(void);

		ScavTrap	&operator=(ScavTrap const &src);

		void		guardGate(void) const;
};

#endif

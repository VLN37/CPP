/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 04:45:46 by jofelipe          #+#    #+#             */
/*   Updated: 2022/03/12 04:27:05 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include <iostream>
#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap
	: public ScavTrap, public FragTrap, virtual public ClapTrap {

	public:
		DiamondTrap(void);
		DiamondTrap(std::string name);
		DiamondTrap(DiamondTrap &src);
		~DiamondTrap(void);

		DiamondTrap	&operator=(DiamondTrap const &src);

		void		WhoAmI(void) const;
		void		attack(const std::string &target);
		virtual std::string get_name(void) const;


	private:
		std::string	_name;
};

#endif

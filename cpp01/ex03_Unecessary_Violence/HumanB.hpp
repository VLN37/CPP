/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 21:18:20 by jofelipe          #+#    #+#             */
/*   Updated: 2022/03/03 23:09:55 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB {

	public:
		HumanB(void);
		HumanB(std::string name);
		~HumanB(void);

		void attack(void);
		void setWeapon(Weapon &weapon);

	private:
		std::string	_name;
		Weapon		*_weapon;
};

#endif

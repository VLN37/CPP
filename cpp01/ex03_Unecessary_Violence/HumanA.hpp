/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 21:04:09 by jofelipe          #+#    #+#             */
/*   Updated: 2022/03/03 23:09:28 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA {

	public:
		HumanA(void);
		HumanA(std::string name, Weapon &weapon);
		~HumanA(void);

		void attack(void);

	private:
		std::string	_name;
		Weapon		&_weapon;

};

#endif

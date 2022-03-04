/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 20:57:14 by jofelipe          #+#    #+#             */
/*   Updated: 2022/03/03 23:13:02 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon {

	public:
		Weapon(void);
		Weapon(std::string weapon_name);
		~Weapon(void);

		const std::string &getType(void) const;
		void setType(std::string type);

	private:
		std::string _type;
};

#endif

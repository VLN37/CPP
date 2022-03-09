/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 00:14:13 by jofelipe          #+#    #+#             */
/*   Updated: 2022/03/09 03:48:18 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class ClapTrap {

	public:
		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(ClapTrap &src);
		~ClapTrap(void);

		ClapTrap	&operator=(ClapTrap &rhs);

		void		attack(const std::string &target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);

		std::string	get_name(void) const;
		void		print_error(std::string err);
		int			get_attack_dmg(void) const;
		int			get_energy_pts(void) const;
		int			get_hit_pts(void) const;

	private:
		std::string	name;
		int			hit_points;
		int			energy_points;
		int			attack_damage;
};

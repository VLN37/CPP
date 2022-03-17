// Copyright (c) 2022 João Rodriguez A.K.A. VLN37. All rights reserved.

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap {

	public:
		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(ClapTrap &src);
		~ClapTrap(void);

		ClapTrap	&operator=(ClapTrap const &rhs);

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

#endif

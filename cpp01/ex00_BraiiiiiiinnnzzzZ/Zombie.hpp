/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 17:01:44 by jofelipe          #+#    #+#             */
/*   Updated: 2022/03/16 21:58:14 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {
public:
	Zombie(std::string name);
	~Zombie(void);

	Zombie* newZombie(std::string name);
	void	randomChump(std::string name);
	void	announce(void);

private:
	std::string name;
};

#endif

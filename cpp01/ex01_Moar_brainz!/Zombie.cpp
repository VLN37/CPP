/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 17:04:41 by jofelipe          #+#    #+#             */
/*   Updated: 2022/03/03 17:27:34 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void) {
	return ;
}

Zombie::Zombie(std::string name) {
	this->name = name;
	Zombie::announce();
}

Zombie::~Zombie(void) {
	std::cout << "Destructor called: "
			  << this->name
			  << std::endl;
}

void	Zombie::announce(void) {
	std::cout << this->name
			  << ": BraiiiiiiinnnzzzZ..."
			  << std::endl;
}

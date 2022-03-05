/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 17:20:32 by jofelipe          #+#    #+#             */
/*   Updated: 2022/03/05 01:26:54 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void) {
	Zombie stackzombie("bro");
	Zombie *heapzombie;

	heapzombie = stackzombie.newZombie("joe");
	stackzombie.announce();
	heapzombie->announce();
	stackzombie.randomChump("billy");

	delete heapzombie;
}

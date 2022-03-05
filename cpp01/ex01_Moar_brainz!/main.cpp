/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 17:53:41 by jofelipe          #+#    #+#             */
/*   Updated: 2022/03/05 03:02:35 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void) {
	Zombie *horde;

	horde = zombieHorde(5, "billy");
	for (int i = 0; i < 5; i++)
		horde[i].announce();
	delete [] horde;
}


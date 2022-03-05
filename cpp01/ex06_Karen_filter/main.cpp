/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 23:32:32 by jofelipe          #+#    #+#             */
/*   Updated: 2022/03/05 02:24:58 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int	main(int argc, char **argv) {
	Karen karen;

	if (argc != 2)
	{
		std::cout << "Yo're pretty stupid aren't you" << std::endl;
		return (0);
	}
	karen.complain(argv[1]);
}

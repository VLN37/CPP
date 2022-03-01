/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cout.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 14:44:06 by jofelipe          #+#    #+#             */
/*   Updated: 2022/03/01 14:53:16 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	char	buff[2056];

	std::cout << "Hello World !" << std::endl << "Input: ";
	std::cin >> buff;
	std::cout << "Output: " << buff << std::endl;
}

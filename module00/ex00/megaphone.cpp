/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 17:27:14 by jofelipe          #+#    #+#             */
/*   Updated: 2022/02/28 20:12:42 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(int argc, char **argv)
{
	std::string str;

	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
		std::cout << std::endl;
		return (0);
	}
	for (int i = 1; i < argc; i++)
	{
		str.append(argv[i]);
		if (i != argc - 1)
			str.push_back(' ');
	}
	for (std::string::iterator ptr = str.begin(); ptr != str.end(); ptr++)
		*ptr = toupper(*ptr);
	std::cout << str << std::endl;
	return (0);
}

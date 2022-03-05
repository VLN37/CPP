/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 23:32:30 by jofelipe          #+#    #+#             */
/*   Updated: 2022/03/05 00:54:30 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

std::string Karen::levels[4] = {
	"DEBUG",
	"INFO",
	"WARNING",
	"ERROR",
};


Karen::Karen(void) {
	fptr[0] = &Karen::debug;
	fptr[1] = &Karen::info;
	fptr[2] = &Karen::warning;
	fptr[3] = &Karen::error;
}

Karen::~Karen(void) {
	return ;
}

void	Karen::complain(std::string level) {
	int	i = -1;

	while (++i < 4) {
		if (level.compare(this->levels[i]) == 0)
			(this->*fptr[i])();
	}
}

void	Karen::debug(void) {
	std::cout << DEBUG << std::endl;
}

void	Karen::info(void) {
	std::cout << INFO << std::endl;
}

void	Karen::warning(void) {
	std::cout << WARNING << std::endl;
}

void	Karen::error(void) {
	std::cout << ERROR << std::endl;
}

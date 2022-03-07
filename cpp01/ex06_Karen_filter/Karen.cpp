/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 23:32:30 by jofelipe          #+#    #+#             */
/*   Updated: 2022/03/07 17:21:43 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

std::string Karen::levels[4] = {
	"DEBUG",
	"INFO",
	"WARNING",
	"ERROR",
};

Karen::funcptr Karen::fptr[4] = {
	&Karen::debug,
	&Karen::info,
	&Karen::warning,
	&Karen::error,
};

Karen::Karen(void) {
	return ;
}

Karen::~Karen(void) {
	return ;
}

void	Karen::complain(std::string level) {
	int	i = -1;

	while (++i < 4) {
		if (!level.compare(this->levels[i]))
			break;
	}
	switch (i) {
		case 0:
			std::cout << "[ DEBUG ]" << std::endl;
			(this->*fptr[0])();
			/* fall through */
		case 1:
			std::cout << "[ INFO ]" << std::endl;
			(this->*fptr[1])();
			/* fall through */
		case 2:
			std::cout << "[ WARNING ]" << std::endl;
			(this->*fptr[2])();
			/* fall through */
		case 3:
			std::cout << "[ ERROR ]" << std::endl;
			(this->*fptr[3])();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]"
					  << std::endl;
	}
}

void	Karen::debug(void) const {
	std::cout << DEBUG << std::endl;
}

void	Karen::info(void) const {
	std::cout << INFO << std::endl;
}

void	Karen::warning(void) const {
	std::cout << WARNING << std::endl;
}

void	Karen::error(void) const {
	std::cout << ERROR << std::endl;
}

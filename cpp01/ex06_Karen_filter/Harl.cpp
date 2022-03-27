// Copyright (c) 2022 João Rodriguez A.K.A. VLN37. All rights reserved.

#include "Harl.hpp"

std::string Harl::levels[4] = {
	"DEBUG",
	"INFO",
	"WARNING",
	"ERROR",
};

Harl::funcptr Harl::fptr[4] = {
	&Harl::debug,
	&Harl::info,
	&Harl::warning,
	&Harl::error,
};

Harl::Harl(void) {
	return;
}

Harl::~Harl(void) {
	return;
}

void	Harl::complain(std::string level) {
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

void	Harl::debug(void) const {
	std::cout << DEBUG << std::endl;
}

void	Harl::info(void) const {
	std::cout << INFO << std::endl;
}

void	Harl::warning(void) const {
	std::cout << WARNING << std::endl;
}

void	Harl::error(void) const {
	std::cout << ERROR << std::endl;
}

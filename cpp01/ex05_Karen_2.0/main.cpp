// Copyright (c) 2022 João Rodriguez A.K.A. VLN37. All rights reserved.

#include "Harl.hpp"

int	main(void) {
	Harl harl;

	std::cout << "\n------------------------------------------------------\n\n";
	harl.complain("DEBUG");
	std::cout << "\n------------------------------------------------------\n\n";
	harl.complain("INFO");
	std::cout << "\n------------------------------------------------------\n\n";
	harl.complain("WARNING");
	std::cout << "\n------------------------------------------------------\n\n";
	harl.complain("ERROR");
	std::cout << "\n------------------------------------------------------\n\n";
}

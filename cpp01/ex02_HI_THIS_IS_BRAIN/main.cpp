// Copyright (c) 2022 João Rodriguez A.K.A. VLN37. All rights reserved.

#include <iostream>

int	main(void) {
	std::string str = "HI THIS IS BRAIN";
	std::string* stringPTR = &str;
	std::string& stringREF = str;

	std::cout << "MEMORY ADDRESS"	<< std::endl
			  << &str				<< std::endl
			  << stringPTR			<< std::endl
			  << &stringREF			<< std::endl;
	std::cout << "VALUE"			<< std::endl
			  << str				<< std::endl
			  << *stringPTR			<< std::endl
			  << str				<< std::endl;
}

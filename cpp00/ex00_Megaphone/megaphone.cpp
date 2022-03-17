// Copyright (c) 2022 João Rodriguez A.K.A. VLN37. All rights reserved.

#include <iostream>

int main(int argc, char** argv) {
	std::string str;

	if (argc == 1) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	for (int i = 1; i < argc; i++) {
		str.append(argv[i]);
		if (i != argc - 1)
			str.push_back(' ');
	}
	for (std::string::iterator ptr = str.begin(); ptr != str.end(); ptr++)
		*ptr = toupper(*ptr);
	std::cout << str << std::endl;
	return (0);
}

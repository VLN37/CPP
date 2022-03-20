// Copyright (c) 2022 João Rodriguez A.K.A. VLN37. All rights reserved.

#include "easyfind.hpp"

int main(void) {
	std::vector<int> vec;

	for (int i = 0; i < 22; i++)
		vec.push_back(i);
	print_vector(vec);
	int nbr = easyfind(vec, 21);
	std::cout << "I FOUND THIS: " << nbr << '\n';
	try {
		nbr = easyfind(vec, 25);
	}
	catch (std::exception &e) {
		std::cout << e.what();
	}
	std::cout << "I FOUND THIS: " << nbr << '\n';
	std::cout << "LAST IS     : " << *(vec.end()) << '\n';

}

// Copyright (c) 2022 João Rodriguez A.K.A. VLN37. All rights reserved.

#include "easyfind.hpp"

int main(void) {
{
	std::vector<int> vec;

	std::cout << "VECTOR TEST *******************************************\n\n";

	for (int i = 0; i < 22; i++)
		vec.push_back(i);
	print(vec);
	std::vector<int>::iterator nbr = easyfind(vec, 21);
	std::cout << "I FOUND THIS: " << *nbr << '\n';
	try {
		nbr = easyfind(vec, 25);
		std::cout << "I FOUND THIS: " << *nbr << '\n';
		std::cout << "LAST IS     : " << *vec.end() << '\n';
	}
	catch (std::exception& e) {
		std::cout << e.what();
	}

	std::cout << "\n******************************************************\n\n";
}

{
	std::list<int> vec;

	std::cout << "LIST TEST *******************************************\n\n";

	for (int i = 0; i < 22; i++)
		vec.push_back(i);
	print(vec);
	std::list<int>::iterator nbr = easyfind(vec, 21);
	std::cout << "I FOUND THIS: " << *nbr << '\n';
	try {
		nbr = easyfind(vec, 25);
		std::cout << "I FOUND THIS: " << *nbr << '\n';
		std::cout << "LAST IS     : " << *vec.end() << '\n';
	}
	catch (std::exception& e) {
		std::cout << e.what();
	}

	std::cout << "\n******************************************************\n\n";
}

{
	std::deque<int> vec;

	std::cout << "DEQUE TEST *******************************************\n\n";

	for (int i = 0; i < 22; i++)
		vec.push_back(i);
	print(vec);
	std::deque<int>::iterator nbr = easyfind(vec, 21);
	std::cout << "I FOUND THIS: " << *nbr << '\n';
	try {
		nbr = easyfind(vec, 25);
		std::cout << "I FOUND THIS: " << *nbr << '\n';
		std::cout << "LAST IS     : " << *vec.end() << '\n';
	}
	catch (std::exception& e) {
		std::cout << e.what();
	}

	std::cout << "\n******************************************************\n\n";
}

	return 0;
}

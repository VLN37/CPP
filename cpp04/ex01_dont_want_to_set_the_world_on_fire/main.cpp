// Copyright (c) 2022 João Rodriguez A.K.A. VLN37. All rights reserved.

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int	main(void) {
	Animal* animals[100];
	Cat		cat;
	Cat		clone = cat;

	for (size_t i = 0; i < 100; i++)
		i % 2 ? animals[i] = new Cat : animals[i] = new Dog;
	for (size_t i = 0; i < 100; i++)
		delete animals[i];
}

// Copyright (c) 2022 João Rodriguez A.K.A. VLN37. All rights reserved.

#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int	main(void) {
	AAnimal	*animals[100];
	Cat		cat;
	Cat		clone = cat;

	for (size_t i = 0; i < 100; i++)
		i % 2 ? animals[i] = new Cat : animals[i] = new Dog;
	animals[0]->makeSound();
	animals[1]->makeSound();
	for (size_t i = 0; i < 100; i++)
		delete animals[i];

	Cat cat1;
	Cat cat2(cat1);
	{
		Cat tmp = cat1;
	}
}

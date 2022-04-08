// Copyright (c) 2022 João Rodriguez A.K.A. VLN37. All rights reserved.

#include "Brain.hpp"

Brain::Brain(void) {
	std::cout << "Brain default constructor called\n";
}

Brain::Brain(Brain const& brain) {
	std::cout << "Brain copy constructor called\n";
	*this = brain;
}

Brain::~Brain(void) {
	std::cout << "Brain destructor called\n";
}

Brain& Brain::operator=(Brain const& rhs) {
	std::cout << "Brain assignment operator called\n";
	for (int i = 0; i < 100; i++)
		this->ideas[i] = rhs.ideas[i];
	return *this;
}

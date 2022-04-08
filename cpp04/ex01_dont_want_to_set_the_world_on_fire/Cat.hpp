// Copyright (c) 2022 João Rodriguez A.K.A. VLN37. All rights reserved.

#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
public:
	Cat(void);
	Cat(Cat const& cat);
	virtual ~Cat(void);

	Cat	&operator=(Cat const &rhs);

	virtual void	makeSound(void) const;
	std::string		getType(void) const;
	Brain			*getBrain(void) const;

private:
	Brain			*ideas;
};

#endif

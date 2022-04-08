// Copyright (c) 2022 João Rodriguez A.K.A. VLN37. All rights reserved.

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal {
public:
	WrongAnimal(void);
	WrongAnimal(WrongAnimal const& animal);
	~WrongAnimal(void);

	void	operator=(WrongAnimal const& rhs);

	void			makeSound(void) const;
	std::string		getType(void) const;

protected:
	std::string	type;
};

#endif

// Copyright (c) 2022 João Rodriguez A.K.A. VLN37. All rights reserved.

#ifndef FIXED_HPP
# define FIXED_HPP

#include <math.h>
#include <iostream>
#include <string>

class Fixed {
public:
	Fixed(void);
	Fixed(const Fixed& src);
	Fixed(const int value);
	Fixed(const float value);
	~Fixed(void);

	Fixed& operator=(Fixed const& rhs);
	void	setRawBits(int const raw);
	int		getRawBits(void) const;
	float	toFloat(void) const;
	int		toInt(void) const;


private:
	int					_rawBits;
	static const int	_bits;
};

//this is used to output into cout with << seamlessly
std::ostream& operator<<(std::ostream& o, Fixed const& i);

#endif

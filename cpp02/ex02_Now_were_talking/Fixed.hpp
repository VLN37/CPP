// Copyright (c) 2022 João Rodriguez A.K.A. VLN37. All rights reserved.

#ifndef FIXED_HPP
# define FIXED_HPP

#include <math.h>
#include <iostream>

class Fixed {
public:
	Fixed(void);
	Fixed(Fixed const& src);
	Fixed(const int value);
	Fixed(const float value);
	~Fixed(void);

	Fixed& operator=(Fixed const& rhs);
	bool	operator>(Fixed const& rhs) const;
	bool	operator<(Fixed const& rhs) const;
	bool	operator<=(Fixed const& rhs) const;
	bool	operator>=(Fixed const& rhs) const;
	bool	operator==(Fixed const& rhs) const;
	bool	operator!=(Fixed const& rhs) const;
	Fixed	operator+(Fixed const& rhs) const;
	Fixed	operator-(Fixed const& rhs) const;
	Fixed	operator/(Fixed const& rhs) const;
	Fixed	operator*(Fixed const& rhs) const;
	Fixed	operator++(void);
	Fixed	operator--(void);
	Fixed	operator++(int);
	Fixed	operator--(int);

	static Fixed const& min(Fixed const& var1, Fixed const& var2);
	static Fixed const& max(Fixed const& var1, Fixed const& var2);
	static Fixed const& min(Fixed& var1, Fixed& var2);
	static Fixed const& max(Fixed& var1, Fixed& var2);
	void				setRawBits(int const raw);
	int					getRawBits(void) const;
	float				toFloat(void) const;
	int					toInt(void) const;


private:
	int					_rawBits;
	static const int	_bits;
};

//this is used to output into cout with << seamlessly
std::ostream& operator<<(std::ostream& o, Fixed const& i);

#endif

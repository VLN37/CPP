/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 22:11:23 by jofelipe          #+#    #+#             */
/*   Updated: 2022/03/06 00:56:35 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {

	public:
		Fixed(void);
		Fixed(Fixed const &src);
		~Fixed(void);

		Fixed	&operator=(Fixed const &rhs);
		void	setRawBits(int const raw);
		int		getRawBits(void) const;

	private:
		int					_rawBits;
		static const int	_bits;
};

//this is used to output into cout with << seamlessly
std::ostream	&operator<<(std::ostream &o, Fixed const &i);

#endif

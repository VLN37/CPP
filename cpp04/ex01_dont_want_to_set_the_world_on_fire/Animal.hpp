/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 03:19:32 by jofelipe          #+#    #+#             */
/*   Updated: 2022/03/14 16:59:14 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal {

	public:
		Animal(void);
		Animal(Animal &animal);
		virtual ~Animal(void);

		Animal	&operator=(Animal const &rhs);

		virtual void	makeSound(void) const;
		std::string		getType(void) const;

	protected:
		std::string	type;
};

#endif

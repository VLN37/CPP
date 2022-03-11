/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 03:36:32 by jofelipe          #+#    #+#             */
/*   Updated: 2022/03/11 07:07:02 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {

	public:
		Dog(void);
		Dog(Dog &dog);
		~Dog(void);

		void	operator=(Dog &rhs);

		virtual void	makeSound(void) const;
		std::string		getType(void) const;

	private:
		Brain			*ideas;
};

#endif

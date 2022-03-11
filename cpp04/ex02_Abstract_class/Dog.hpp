/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 03:36:32 by jofelipe          #+#    #+#             */
/*   Updated: 2022/03/11 08:27:23 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal {

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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 03:19:32 by jofelipe          #+#    #+#             */
/*   Updated: 2022/03/14 17:06:11 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

#include <iostream>

class AAnimal {

	public:
		AAnimal(void);
		AAnimal(AAnimal &animal);
		virtual ~AAnimal(void);

		Animal	&operator=(AAnimal &rhs);

		virtual void		makeSound(void) const = 0;
		virtual std::string	getType(void) const = 0;

	protected:
		std::string	type;
};

#endif

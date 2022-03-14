/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 03:31:10 by jofelipe          #+#    #+#             */
/*   Updated: 2022/03/14 16:55:12 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include "Animal.hpp"

class Cat : public Animal {

	public:
		Cat(void);
		Cat(Cat &cat);
		~Cat(void);

		Cat	&operator=(Cat &rhs);

		virtual void	makeSound(void) const;
		std::string		getType(void) const;
};

#endif

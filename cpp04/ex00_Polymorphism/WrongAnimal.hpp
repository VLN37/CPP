/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 04:22:04 by jofelipe          #+#    #+#             */
/*   Updated: 2022/03/11 04:33:17 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal {

	public:
		WrongAnimal(void);
		WrongAnimal(WrongAnimal &animal);
		~WrongAnimal(void);

		void	operator=(WrongAnimal &rhs);

		void			makeSound(void) const;
		std::string		getType(void) const;

	protected:
		std::string	type;
};

#endif

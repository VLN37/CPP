/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 06:38:10 by jofelipe          #+#    #+#             */
/*   Updated: 2022/03/11 06:57:04 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain {

	public:
		Brain(void);
		Brain(Brain &brain);
		~Brain(void);

		Brain	&operator=(Brain const &rhs);

		std::string	ideas[100];
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 06:48:53 by jofelipe          #+#    #+#             */
/*   Updated: 2022/03/14 16:26:53 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void) {
	std::cout << "Brain default constructor called\n";
}

Brain::Brain(Brain &brain) {
	std::cout << "Brain copy constructor called\n";
	*this = brain;
}

Brain::~Brain(void) {
	std::cout << "Brain destructor called\n";
}

Brain	&Brain::operator=(Brain const &rhs) {
	std::cout << "Brain assignment operator called\n";
	for (int i = 0; i < 100; i++)
		this->ideas[i] = rhs.ideas[i];
	return *this;
}

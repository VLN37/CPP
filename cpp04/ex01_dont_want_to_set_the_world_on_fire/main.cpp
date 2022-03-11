/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 03:25:03 by jofelipe          #+#    #+#             */
/*   Updated: 2022/03/11 08:07:30 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int	main(void) {
	Animal	*animals[100];
	Cat		cat;
	Cat		clone = cat;

	for (size_t i = 0; i < 100; i++)
		i % 2 ? animals[i] = new Cat : animals[i] = new Dog;
	for (size_t i = 0; i < 100; i++)
		delete animals[i];
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 03:25:03 by jofelipe          #+#    #+#             */
/*   Updated: 2022/03/12 11:43:19 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int	main(void) {
	AAnimal	*animals[100];
	Cat		cat;
	Cat		clone = cat;

	for (size_t i = 0; i < 100; i++)
		i % 2 ? animals[i] = new Cat : animals[i] = new Dog;
	animals[0]->makeSound();
	animals[1]->makeSound();
	for (size_t i = 0; i < 100; i++)
		delete animals[i];
}

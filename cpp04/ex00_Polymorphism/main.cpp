/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 03:25:03 by jofelipe          #+#    #+#             */
/*   Updated: 2022/03/11 04:51:41 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main(void) {
	const Animal*		meta = new Animal();
	const Animal*		j = new Dog();
	const Animal*		i = new Cat();
	const WrongAnimal*	l = new WrongCat();
	const WrongCat*		m = new WrongCat();

	std::cout << '\n' << i->getType() << " goes\n";
	i->makeSound(); //will output the cat sound!
	std::cout << '\n' << j->getType() << " goes\n";
	j->makeSound();
	std::cout << "\nAnimal goes\n";
	meta->makeSound();
	std::cout << "\nWrongCat ptr goes\n";
	m->makeSound();
	std::cout << "\nWrongAnimal ptr goes\n";
	l->makeSound();
	std::cout << std::endl;

	delete meta;
	delete i;
	delete j;
	delete l;
	delete m;
	return 0;
}

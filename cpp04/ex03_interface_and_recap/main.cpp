/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 04:54:37 by jofelipe          #+#    #+#             */
/*   Updated: 2022/03/12 10:15:04 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"
#include "Character.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "AMateria.hpp"
#include "Ice.hpp"

int	main(void) {
	ICharacter		*you = new Character;
	IMateriaSource	*mybook = new MateriaSource;
	AMateria		*tmp;

	std::cout << you->getName() << '\n';
	mybook->learnMateria(new Ice);
	tmp = mybook->createMateria("ice");
	(void)tmp;
	delete you;
	delete mybook;
	delete tmp;
}

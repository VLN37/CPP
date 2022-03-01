/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   InitListClass.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 17:03:10 by jofelipe          #+#    #+#             */
/*   Updated: 2022/03/01 18:06:40 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "InitListClass.hpp"

InitList::InitList (int var1, int var2, int var3)
	: a1(var1), a2(var2), a3(var3) {
	std::cout << "Constructor called" << std::endl;
	std::cout << "this->a1 = " << this->a1 << std::endl;
	std::cout << "this->a2 = " << this->a2 << std::endl;
	std::cout << "this->a3 = " << this->a3 << std::endl;
	return ;
}

InitList::~InitList(void) {
	std::cout << "Destructor called" << std::endl;
	return ;
}

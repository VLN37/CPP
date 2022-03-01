/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MemberClass.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 15:02:19 by jofelipe          #+#    #+#             */
/*   Updated: 2022/03/01 15:31:26 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "MemberClass.hpp"

Member::Member(void)
{
	std::cout << "Constructor called" << std::endl;
	return ;
}

Member::~Member(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

void	Member::bar(void)
{
	std::cout << "Function bar called - ";
	std::cout << "Foo = " << Member::foo << std::endl;
}

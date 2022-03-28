// Copyright (c) 2022 João Rodriguez A.K.A. VLN37. All rights reserved.

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

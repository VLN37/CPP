// Copyright (c) 2022 João Rodriguez A.K.A. VLN37. All rights reserved.

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

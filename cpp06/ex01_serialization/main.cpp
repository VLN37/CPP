// Copyright (c) 2022 João Rodriguez A.K.A. VLN37. All rights reserved.

#include "program.hpp"

uintptr_t serialize(Data* ptr) {
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw) {
	return reinterpret_cast<Data *>(raw);
}

int main(void) {
	Data		*data1 = new Data;
	uintptr_t	ptr = 0;

	data1->foo = 42;
	std::cout << "Data1 before: " << data1->foo << '\n';

	ptr = serialize(data1);
	std::cout << "UINT: " << reinterpret_cast<Data *>(ptr)
	<< '\n' << "DATA: " << deserialize(ptr) << '\n';

	return 0;
}

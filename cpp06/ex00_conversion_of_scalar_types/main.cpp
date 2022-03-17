// Copyright (c) 2022 João Rodriguez A.K.A. VLN37. All rights reserved.

#include "scalar.hpp"

int main(void) {
	std::cout << "\n******************** CHAR TESTS **********************\n\n";
	convert_literal("a");
	convert_literal("~");
	convert_literal("\\");
	convert_literal("+");
	convert_literal(".");
	convert_literal(" ");
	convert_literal("\t");
	std::cout << "\n******************************************************\n";

	std::cout << "\n********************* INT TESTS **********************\n\n";
	convert_literal("0");
	convert_literal("2147483647");
	convert_literal("-2147483648");
	convert_literal("42");
	std::cout << "\n******************************************************\n";

	std::cout << "\n********************* FLOAT TESTS ********************\n\n";
	convert_literal("42f");
	convert_literal("0f");
	convert_literal("42.21f");
	convert_literal(".666f");
	convert_literal("3.1415f");
	convert_literal("nanf");
	convert_literal("+inff");
	convert_literal("-inff");
	std::cout << "\n******************************************************\n";

	std::cout << "\n******************* DOUBLE TESTS *********************\n\n";
	convert_literal("42.");
	convert_literal("42.21");
	convert_literal("0.");
	convert_literal(".666");
	convert_literal("3.1415");
	convert_literal("nan");
	convert_literal("+inf");
	convert_literal("-inf");
	std::cout << "\n******************************************************\n";

	std::cout << "\n******************* ERROR TESTS **********************\n\n";
	convert_literal("aa");
	convert_literal("42F");
	convert_literal(".f");
	convert_literal("42..");
	convert_literal("..42");
	convert_literal("42.21ff");
	convert_literal("42.21.21");
	convert_literal("42a");
	convert_literal("a42");
	std::cout << "\n******************************************************\n";
}

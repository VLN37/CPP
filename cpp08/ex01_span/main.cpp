// Copyright (c) 2022 João Rodriguez A.K.A. VLN37. All rights reserved.

#include "Span.hpp"

int main(void) {
	std::cout << "this compiles!\n";

	{
		Span span(20000);

		for (int i = 0; i < 100; i++)
			span.addNumber(10 * (10 * i * i));
		span.print();
		try {
			span.addNumber(5);
		}
		catch (std::exception& e) {
			std::cout << e.what();
		}
	}
	{
		Span span(20);

		span.shortestSpan();
		span.addNumber(10);
		span.longestSpan();
		span.addNumber(60);
		span.addNumber(560);
		span.print();

		//test exception handling
		try {
			span.addNumber(5560);
			span.addNumber(5);
		}
		catch (std::exception& e) {
			std::cout << e.what();
		}
		span.print();

		span.addNumber(500, 502);
		span.print();
		span.addNumber(502, 500);

		//test cpy constructor
		Span spancpy(span);
		spancpy.print();

		spancpy.addNumber(span.begin(), span.end());
		spancpy.print();
	}
}

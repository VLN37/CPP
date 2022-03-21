// Copyright (c) 2022 João Rodriguez A.K.A. VLN37. All rights reserved.

#include "Span.hpp"

int main(void) {
	std::cout << "this compiles!\n";

	{
		Span span(20000);

		for (int i = 0; i < 20000; i++)
			span.addNumber(10 * (10 * i * i));
		span.print();
		std::cout << "Min_span: " << span.shortestSpan() << "\n"
				  << "Max_span: " << span.longestSpan() << "\n\n";
		try {
			span.addNumber(5);
		}
		catch (std::exception& e) {
			std::cout << e.what();
		}
	}
	{
		Span span(10);

		span.addNumber(10);
		span.addNumber(60);
		span.addNumber(560);
		span.print();
		std::cout << "Min_span: " << span.shortestSpan() << "\n"
				  << "Max_span: " << span.longestSpan() << "\n\n";
		try {
			span.addNumber(5560);
			span.addNumber(5);
		}
		catch (std::exception& e) {
			std::cout << e.what();
		}
		span.print();
		std::cout << "Min_span: " << span.shortestSpan() << "\n"
				  << "Max_span: " << span.longestSpan() << "\n\n";

		span.addRange(500, 502);
		span.print();
		std::cout << "Min_span: " << span.shortestSpan() << "\n"
				  << "Max_span: " << span.longestSpan() << "\n\n";
		span.addRange(502, 500);
	}
}

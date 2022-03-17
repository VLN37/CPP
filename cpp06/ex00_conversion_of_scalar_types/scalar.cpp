// Copyright (c) 2022 João Rodriguez A.K.A. VLN37. All rights reserved.

#include "scalar.hpp"

static void print_error(std::string str, std::string error) {
	std::cout << str << ": " << error << '\n';
}

static void literal_char(const char* str) {
	std::cout << "CHAR: " << str << '\n';
	if (isprint(*str) && !isspace(*str))
		std::cout << "C: " << *str << '\n';
	else
		std::cout << "C: Character is non printable or white space\n";
	std::cout 	  << "I: " << (int)*str << '\n';
	std::cout 	  << "F: " << (float)*str << '\n';
	std::cout 	  << "D: " << (double)*str << "\n\n";
}

static void literal_float(const char* str) {
	std::stringstream ss;
	float 	f = 0;
	int 	i = 0;
	double 	d = 0;
	char 	c = 0;

	std::cout << "FLOAT: " << str << '\n';
	ss.precision(1);
	ss << str;
	ss >> f;
	i = static_cast<int>(f);
	c = static_cast<char>(f);
	d = static_cast<float>(f);
	std::cout.precision(1);
	std::cout << std::fixed << "I: " << i << "\n";
	if (i > CHAR_MAX || i < CHAR_MIN)
		std::cout << std::fixed << "C: Impossible\n";
	else if (!isprint(static_cast<char>(i)))
		std::cout << "C: Not printable\n";
	else
		std::cout << std::fixed << "C: " << c << '\n';
	std::cout << std::fixed << "F: " << f <<"f" << '\n';
	std::cout << std::fixed << "D: " << d << "\n\n";
}

static void literal_double(const char* str) {
	std::stringstream ss;
	float 	f = 0;
	int 	i = 0;
	double 	d = 0;
	char 	c = 0;

	std::cout << "DOUBLE: " << str << '\n';
	ss.precision(1);
	ss << str;
	ss >> d;
	i = static_cast<int>(d);
	c = static_cast<char>(d);
	f = static_cast<float>(d);
	std::cout.precision(1);
	std::cout << std::fixed << "I: " << i << "\n";
	if (i > CHAR_MAX || i < CHAR_MIN)
		std::cout << std::fixed << "C: Impossible\n";
	else if (!isprint(static_cast<char>(i)))
		std::cout << "C: Not printable\n";
	else
		std::cout << std::fixed << "C: " << c << '\n';
	std::cout << std::fixed << "F: " << f <<"f" << '\n';
	std::cout << std::fixed << "D: " << d << "\n\n";
}

static void literal_int(const char* str) {
	std::stringstream ss;
	float 	f = 0;
	int 	i = 0;
	double 	d = 0;
	char 	c = 0;

	std::cout << "INT: " << str << '\n';
	ss.precision(1);
	ss << str;
	ss >> i;
	c = static_cast<char>(i);
	f = static_cast<float>(i);
	d = static_cast<double>(i);
	std::cout.precision(1);
	std::cout << std::fixed << "I: " << i << "\n";
	if (i > CHAR_MAX || i < CHAR_MIN)
		std::cout << std::fixed << "C: Impossible\n";
	else if (!isprint(static_cast<char>(i)))
		std::cout << "C: Not printable\n";
	else
		std::cout << std::fixed << "C: " << c << '\n';
	std::cout << std::fixed << "F: " << f <<"f" << '\n';
	std::cout << std::fixed << "D: " << d << "\n\n";
}

bool special_cases(std::string str) {
	if (str == "-inff" || str == "+inff" || str == "nanf") {
		std::cout << "FLOAT: " << str << '\n';
		std::cout << "C: Impossible\n";
		std::cout << "I: Impossible\n";
		std::cout << "F: " << str << "\n";
		std::cout << "D: " << str.substr(0, str.size() - 1) << "\n\n";
		return true;
	}
	if (str == "-inf" || str == "+inf" || str == "nan") {
		std::cout << "DOUBLE: " << str << '\n';
		std::cout << "C: Impossible\n";
		std::cout << "I: Impossible\n";
		std::cout << "D: " << str << '\n';
		str.push_back('f');
		std::cout << "F: " << str << "\n\n";
		return true;
	}
	return false;
}

void convert_literal(std::string str) {
	std::string set = "-.f";
	bool dot_found = false;
	std::string::iterator it = str.begin() - 1;

	if (special_cases(str))
		return;
	if (str.size() == 1 && !isdigit(*(it + 1)))
		return literal_char(str.c_str());
	if (*(it + 1) == '.' && !isdigit(*(it + 2)))
		return print_error(str, ERR_INVAL);
	if (*(it + 1) == '-')
		++it;
	while (++it != str.end()) {
		if (!isdigit(*it)) {
			if (*it == '.' && dot_found == false) {
				dot_found = true;
				continue;
			}
			if (*it == 'f' && it + 1 == str.end())
				return literal_float(str.c_str());
			return print_error(str, ERR_INVAL);
		}
	}
	if (dot_found)
		return literal_double(str.c_str());
	return literal_int(str.c_str());
}

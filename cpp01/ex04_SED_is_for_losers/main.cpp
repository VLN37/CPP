// Copyright (c) 2022 João Rodriguez A.K.A. VLN37. All rights reserved.

#include "replace.h"

bool	print_error(const char* err) {
	std::cerr << err << std::endl;
	return false;
}

bool	validation(int argc, char** argv) {
	std::fstream	file;
	std::string		str;

	if (argc != 4)
	{
		print_error(ERR_ARG);
		return print_error(ERR_USE);
	}
	file.open(argv[1]);
	if (!file)
		return print_error(ERR_INF);
	std::ifstream	file2;
	if (file.peek() && file.eof())
		return print_error(ERR_EMP);
	file.close();
	return true;
}

void	get_file_contents(std::string filename, std::string* filecontent) {
	std::string		buffer;
	std::ifstream	infile;

	infile.open(filename.c_str(), std::ios_base::in);
	while (std::getline(infile, buffer))
	{
		*filecontent += buffer;
		filecontent->push_back('\n');
	}
}

void	set_file_contents(std::string filename, std::string content) {
	std::ofstream	outfile;

	outfile.open(filename.c_str());
	outfile << content;
	outfile.close();
}

void replace(std::string& str, std::string rem, std::string rep) {
	std::string	tmp;
	std::string rest;
	size_t		i;

	if (rem.empty() || rep.empty())
		return;
	i = str.find(rem);
	if (i == str.npos)
		return;
	rest.assign(str);
	str.clear();
	while (i != str.npos) {
		tmp = rest.substr(0, i);
		i += rem.size();
		rest = rest.substr(i);
		str += tmp += rep;
		i = rest.find(rem);
	}
	str += rest;
}


int	main(int argc, char** argv) {
	if (!validation(argc, argv))
		return EXIT_FAILURE;

	std::string	filecontent;
	std::string strv[4] = {
		std::string(argv[0]),
		std::string(argv[1]),
		std::string(argv[2]),
		std::string(argv[3]),
	};

	get_file_contents(strv[1], &filecontent);
	replace(filecontent, strv[2], strv[3]);
	set_file_contents(strv[1] + ".replace", filecontent);
}

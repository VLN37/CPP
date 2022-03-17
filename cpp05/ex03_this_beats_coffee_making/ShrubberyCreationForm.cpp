// Copyright (c) 2022 João Rodriguez A.K.A. VLN37. All rights reserved.

#include "ShrubberyCreationForm.hpp"

int ShrubberyCreationForm::req_sign = 145;
int ShrubberyCreationForm::req_exec = 137;

ShrubberyCreationForm::ShrubberyCreationForm(void)
	: Form(req_sign, req_exec), _name(format_name("Form #"))
	, _min_grade(req_sign), _min_exec(req_exec), _signed(false) {
	_target = "NULL";
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& src)
	: Form(req_sign, req_exec), _name(src.get_name()),
	_min_grade(src.get_grade()), _min_exec(src.get_exec()) {
	*this = src;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
	: Form(req_sign, req_exec), _name(format_name("Form #"))
	, _min_grade(req_sign), _min_exec(req_exec) {
	this->_target = target;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {
	return;
}

const ShrubberyCreationForm&
ShrubberyCreationForm::operator=(const ShrubberyCreationForm& rhs) {
	this->_signed = rhs.is_signed();
	this->_target = rhs._target;
	return *this;
}

void ShrubberyCreationForm::enact(const Form& form) const {
	std::ofstream outfile;
	std::string tmp;

	std::cout << "\n******* SHRUBBERY REQUEST FORM EXECUTION *******\n\n"
		<< "FORM NAME            : "
		<< form.get_name() << "\n"
		<< "TARGET TO SHRUBBERIZE: "
		<< this->_target << "\n\n"
		<< "< SHRUBBERY CREATED >\n\n";
	tmp = _target + "_shrubbery";
	outfile.open(tmp.c_str());
	outfile
		<< "                                                         .\n"
		<< "                                              .         ;\n"
		<< "                 .              .              ;%     ;;\n"
		<< "                   ,           ,                :;%  %;\n"
		<< "                    :         ;                   :;%;'     .,\n"
		<< "           ,.        %;     %;            ;        %;'    ,;\n"
		<< "             ;       ;%;  %%;        ,     %;    ;%;    ,%'\n"
		<< "              %;       %;%;      ,  ;       %;  ;%;   ,%;'\n"
		<< "               ;%;      %;        ;%;        % ;%;  ,%;'\n"
		<< "                `%;.     ;%;     %;'         `;%%;.%;'\n"
		<< "                 `:;%.    ;%%. %@;        %; ;@%;%'\n"
		<< "                    `:%;.  :;bd%;          %;@%;'\n"
		<< "                      `@%:.  :;%.         ;@@%;'\n"
		<< "                        `@%.  `;@%.      ;@@%;\n"
		<< "                          `@%%. `@%%    ;@@%;\n"
		<< "                            ;@%. :@%%  %@@%;\n"
		<< "                              %@bd%%%bd%%:;\n"
		<< "                                #@%%%%%:;;\n"
		<< "                                %@@%%%::;\n"
		<< "                                %@@@%(o);  . '\n"
		<< "                                %@@@o%;:(.,'\n"
		<< "                            `.. %@@@o%::;\n"
		<< "                               `)@@@o%::;\n"
		<< "                                %@@(o)::;\n"
		<< "                               .%@@@@%::;\n"
		<< "                               ;%@@@@%::;.\n"
		<< "                              ;%@@@@%%:;;;.\n"
		<< "                          ...;%@@@@@%%:;;;;,..\n";

}

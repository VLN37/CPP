// Copyright (c) 2022 João Rodriguez A.K.A. VLN37. All rights reserved.

#include <iostream>
#include <string>
#include "Form.hpp"

#define FORM_TYPES 3

class Intern {
	typedef Form* (Intern::* funcptr)(std::string) const;

public:
	Intern(void);
	Intern(Intern const& intern);
	~Intern(void);

	const Intern& operator=(const Intern& rhs);

	Form* makeForm(std::string name, std::string target);

private:
	static std::string templates[FORM_TYPES];
	static funcptr fptr[FORM_TYPES];
	Form*	cloneShruberry(std::string target) const;
	Form*	clonePardon(std::string target) const;
	Form*	cloneRobotomy(std::string target) const;
};

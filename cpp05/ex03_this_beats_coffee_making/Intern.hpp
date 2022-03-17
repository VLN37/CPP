// Copyright (c) 2022 João Rodriguez A.K.A. VLN37. All rights reserved.

#include <iostream>
#include "Form.hpp"

#define FORM_TYPES 3

class Intern {
	typedef void (Form::* funcptr)(std::string) const;

public:
	Intern(void);
	Intern(Intern const& intern);
	~Intern(void);

	static std::string templates[FORM_TYPES];

	const Intern& operator=(const Intern& rhs);

	Form* makeForm(std::string name, std::string target);
};

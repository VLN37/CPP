// Copyright (c) 2022 João Rodriguez A.K.A. VLN37. All rights reserved.

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include "Form.hpp"

#define MAX_GRADE 1
#define MIN_GRADE 150
#define HIGH_EXC "Grade too high. Reverting to maximum possible grade (1)\n"
#define LOW_EXC "Grade too low. Reverting to minimum grade (150)\n"

class Form;

class Bureaucrat {
public:
	Bureaucrat(void);
	Bureaucrat(Bureaucrat const& src);
	Bureaucrat(std::string name, int grade);
	~Bureaucrat(void);

	Bureaucrat& operator=(Bureaucrat const& rhs);
	Bureaucrat operator++(int);
	Bureaucrat& operator++(void);
	Bureaucrat operator--(int);
	Bureaucrat& operator--(void);

	std::string get_name(void) const;
	int			get_grade(void) const;
	void		signForm(Form& form) const;


private:
	const std::string	_name;
	int					_grade;

	void check_exceptions(int grade);
	class GradeTooHighException : public std::exception {
	public:
		virtual const char* what() const throw();
	};
	class GradeTooLowException : public std::exception {
	public:
		virtual const char* what() const throw();
	};
};

std::ostream& operator<<(std::ostream& stream, Bureaucrat const& rhs);

#endif

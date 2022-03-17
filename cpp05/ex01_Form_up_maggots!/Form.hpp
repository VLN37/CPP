// Copyright (c) 2022 João Rodriguez A.K.A. VLN37. All rights reserved.

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <string>
#include <sstream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
public:
	Form(void);
	Form(const Form& src);
	Form(const int grade, const int exec);
	~Form(void);

	static int	nbr;
	const Form& operator=(const Form& src);

	std::string	get_name(void) const;
	int			get_grade(void) const;
	int			get_exec(void) const;
	bool		is_signed(void) const;
	void		check_exception(int grade, int exec);
	std::string		format_name(std::string const& src);
	void		beSigned(const Bureaucrat& congressman);


	class GradeTooHighException : public std::exception {
	public:
		virtual const char* what() const throw();
	};
	class GradeTooLowException : public std::exception {
	public:
		virtual const char* what() const throw();
	};

private:
	const std::string	_name;
	const int			_min_grade;
	const int			_min_exec;
	bool				_signed;
};

std::ostream& operator<<(std::ostream& o, const Form& rhs);

#endif

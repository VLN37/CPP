// Copyright (c) 2022 João Rodriguez A.K.A. VLN37. All rights reserved.

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <sstream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
public:
	Form(void);
	Form(const Form& src);
	Form(const int grade, const int exec);
	virtual ~Form(void);

	static int	nbr;
	const Form& operator=(const Form& src);

	std::string		get_name(void) const;
	int				get_grade(void) const;
	int				get_exec(void) const;
	bool			is_signed(void) const;
	void			check_exception(int grade, int exec);
	void			beSigned(const Bureaucrat& congressman);
	void			execute(Bureaucrat const& congressman) const;
	std::string		format_name(std::string const& src);
	virtual void	enact(const Form& form) const = 0;


	class GradeTooHighException : public std::exception {
	public:
		virtual const char* what() const throw();
	};
	class GradeTooLowException : public std::exception {
	public:
		virtual const char* what() const throw();
	};
	class UnsignedFormException : public std::exception {
	public:
		virtual const char* what() const throw();
	};
	class InsufficientGradeException : public std::exception {
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

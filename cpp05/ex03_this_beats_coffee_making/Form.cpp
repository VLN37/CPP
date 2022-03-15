/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 15:09:23 by jofelipe          #+#    #+#             */
/*   Updated: 2022/03/15 07:34:18 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

int Form::nbr = 0;

void	Form::check_exception(int grade, int exec) {
	try {
		if (grade > 150 || exec > 150)
			throw Form::GradeTooLowException();
		if (grade < 1 || exec < 1)
			throw Form::GradeTooHighException();
	}
	catch (Form::GradeTooLowException &e) {
		std::cout << e.what();
	}
	catch (Form::GradeTooHighException &e) {
		std::cout << e.what();
	}
}

Form::Form(void)
: _name(format_name("Form #"))
, _min_grade(150), _min_exec(150), _signed(false) {
	check_exception(_min_grade, _min_exec);
	++Form::nbr;
}

Form::Form(const Form &src)
: _name(src.get_name()),
_min_grade(src.get_grade()),
_min_exec(src._min_exec),
_signed(src.is_signed()) {
	check_exception(_min_grade, _min_exec);
}

Form::Form(const int grade, const int exec)
: _name(format_name("Form #"))
, _min_grade(grade)
, _min_exec(exec)
, _signed(false) {
	check_exception(_min_grade, _min_exec);
	++Form::nbr;
}

Form::~Form(void) {
	return ;
}

const Form &Form::operator=(const Form &src) {
	//cannot return reference to temporary value
	(void)src;
	return *this;
}

std::string	Form::format_name(std::string const &src) {
	std::stringstream	stream;
	std::string			str;

	stream << src << this->nbr;
	str = stream.str();
	std::cout << str << '\n';
	return str;
}

std::string	Form::get_name(void) const {
	return this->_name;
}

int Form::get_grade(void) const {
	return this->_min_grade;
}

int Form::get_exec(void) const {
	return this->_min_exec;
}

bool Form::is_signed(void) const {
	return this->_signed;
}

std::ostream &operator<<(std::ostream &o, const Form &rhs) {
	std::cout << "Form name            : "
			  << rhs.get_name() << '\n'
			  << "Minimum grade to sign: "
			  << rhs.get_grade() << '\n'
			  << "Minimum grade to exec: "
			  << rhs.get_exec() << '\n'
			  << "Is the form signed   : ";
	rhs.is_signed() ? std::cout << "yes\n" : std::cout << "no\n";
	return o;
}

void	Form::beSigned(const Bureaucrat &congressman) {
	if (this->_signed) {
		std::cout << "Form is already signed.\n";
	} else if (congressman.get_grade() > this->_min_grade) {
		std::cout << congressman.get_name()
				  << " couldn't sign "
				  << this->_name
				  << " because he's not authoritative enough.\n";
	} else {
		this->_signed = true;
		std::cout << congressman.get_name()
				  << " signed "
				  << this->_name << '\n';
	}
}

void	Form::execute(const Bureaucrat &congressman) const {
	try {
		if (this->_signed == false)
			throw UnsignedFormException();
		if (congressman.get_grade() >= this->_min_exec)
			throw InsufficientGradeException();
		congressman.executeForm(*this);
	}
	catch (UnsignedFormException &e) {
		std::cout << e.what();
	}
	catch (InsufficientGradeException &e) {
		std::cout << e.what();
	}
}

const char *Form::GradeTooHighException::what(void) const throw() {
	return ("Form grade too high. A higher state of knowledge required\n");
}

const char *Form::GradeTooLowException::what(void) const throw() {
	return ("Form grade too low. Any pleb could do this\n");
}

const char *Form::UnsignedFormException::what(void) const throw() {
	return ("Exception: Unable to execute form. It is not signed\n");
}

const char *Form::InsufficientGradeException::what(void) const throw() {
	return ("Exception: Unable to execute form. Insufficient grade\n");
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 05:38:40 by jofelipe          #+#    #+#             */
/*   Updated: 2022/03/14 06:34:56 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name("Boss's relative") {
	this->_grade = MAX_GRADE;
}

Bureaucrat::Bureaucrat(Bureaucrat const &src)
	: _name(src.get_name()) {
	*this = src;
}

Bureaucrat::Bureaucrat(std::string name, int grade)
	: _name(name) {
	check_exceptions(grade);
}

void	Bureaucrat::check_exceptions(int grade) {
	try {
		if (grade < MAX_GRADE)
			throw Bureaucrat::GradeTooHighException();
	}
	catch (std::exception &e) {
		std::cout << e.what();
		this->_grade = MAX_GRADE;
		return ;
	}
	try {
		if (grade > MIN_GRADE)
			throw Bureaucrat::GradeTooLowException();
		this->_grade = grade;
	}
	catch (std::exception &e) {
		std::cout << e.what();
		this->_grade = MIN_GRADE;
	}
}

Bureaucrat::~Bureaucrat(void) {
	return ;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &rhs) {
	this->_grade = rhs.get_grade();
	return *this;
}

Bureaucrat Bureaucrat::operator++(int) {
	//note to self: why does *this doesn't work as a copy constructor?
	//note to self2: when your return by value you actuall construct a copy
	Bureaucrat ret(*this);
	check_exceptions(this->_grade - 1);
	return ret;
}

Bureaucrat Bureaucrat::operator++(void) {
	check_exceptions(this->_grade - 1);
	return *this;
}

Bureaucrat Bureaucrat::operator--(int) {
	Bureaucrat ret(*this);
	check_exceptions(this->_grade + 1);
	return ret;
}

Bureaucrat Bureaucrat::operator--(void) {
	check_exceptions(this->_grade + 1);
	return *this;
}

std::string Bureaucrat::get_name(void) const {
	return this->_name;
}

int			Bureaucrat::get_grade(void) const {
	return this->_grade;
}

const char *Bureaucrat::GradeTooHighException::what(void) const throw() {
	return HIGH_EXC;
}

const char *Bureaucrat::GradeTooLowException::what(void) const throw() {
	return LOW_EXC;
}

std::ostream &operator<<(std::ostream &stream, Bureaucrat const &rhs) {
	std::cout << "This bureaucrat is called "
			  << rhs.get_name()
			  << " and has grade "
			  << rhs.get_grade() << '\n';
	return stream;
}

void		Bureaucrat::signForm(const Form &form) const {
	if (form.is_signed())
		std::cout << this->_name
				  << " signed "
				  << form.get_name() << '\n';
	else
		std::cout << this->_name
				  << " couldn't sign "
				  << form.get_name()
				  << " because he's a politician, what did you expect?\n";
}

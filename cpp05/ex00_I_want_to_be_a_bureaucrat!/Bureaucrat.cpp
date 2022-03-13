/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 05:38:40 by jofelipe          #+#    #+#             */
/*   Updated: 2022/03/13 11:01:11 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name("Boss's relative") {
	this->_grade = 150;
}

Bureaucrat::Bureaucrat(Bureaucrat const &src)
	: _name(src.get_name()) {
	*this = src;
}

Bureaucrat::Bureaucrat(std::string name, int grade)
	: _name(name) {
	try {
		if (grade > 150)
			throw Bureaucrat::GradeTooLowException();
	}
	catch (std::exception &e) {
		std::cout << e.what();
		this->_grade = 150;
	}
	try {
		if (grade < 1)
			throw Bureaucrat::GradeTooHighException();
		this->_grade = grade;
	}
	catch (std::exception &e) {
		std::cout << e.what();
		this->_grade = 1;
	}
}

Bureaucrat::~Bureaucrat(void) {
	return ;
}

Bureaucrat Bureaucrat::operator=(Bureaucrat const &rhs) {
	this->_grade = rhs.get_grade();
	return *this;
}

Bureaucrat Bureaucrat::operator++(int) {
	//note to self: why does *this doesn't work as a copy constructor?
	Bureaucrat ret(this->get_name(), this->get_grade());
		--this->_grade;
	return ret;
}

Bureaucrat Bureaucrat::operator++(void) {
	--this->_grade;
	return *this;
}

Bureaucrat Bureaucrat::operator--(int) {
	Bureaucrat ret(*this);
	++this->_grade;
	return ret;
}

Bureaucrat Bureaucrat::operator--(void) {
	++this->_grade;
	return *this;
}

std::string Bureaucrat::get_name(void) const {
	return this->_name;
}

int			Bureaucrat::get_grade(void) const {
	return this->_grade;
}

const char *Bureaucrat::GradeTooHighException::what(void) const throw() {
	return"Grade too high. Reverting to maximum possible grade (1)\n";
}

const char *Bureaucrat::GradeTooLowException::what(void) const throw() {
	return "Grade too low. Reverting to minimum grade (150)\n";
}

std::ostream &operator<<(std::ostream &stream, Bureaucrat const &rhs) {
	std::cout << "Bureaucrat is called "
			  << rhs.get_name()
			  << " and has grade "
			  << rhs.get_grade() << '\n';
	return stream;
}

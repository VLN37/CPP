/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 15:08:00 by jofelipe          #+#    #+#             */
/*   Updated: 2022/03/13 18:01:17 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {

	public:
		Form(void);
		Form(const Form &src);
		Form(const int grade, const int exec);
		~Form(void);

		static int	nbr;
		const Form &operator=(const Form &src);

		std::string	get_name(void) const;
		int			get_grade(void) const;
		int			get_exec(void) const;
		bool		is_signed(void) const;
		void		check_exception(int grade, int exec);
		void		beSigned(const Bureaucrat &congressman);


		class GradeTooHighException : public std::exception {
			public:
				virtual const char *what() const throw();
		};
		class GradeTooLowException : public std::exception {
			public:
				virtual const char *what() const throw();
		};

	private:
		const std::string	_name;
		const int			_min_grade;
		const int			_min_exec;
		bool				_signed;
};

std::ostream &operator<<(std::ostream &o, const Form &rhs);

#endif

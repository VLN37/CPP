/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 05:37:27 by jofelipe          #+#    #+#             */
/*   Updated: 2022/03/13 11:38:30 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat {

	public:
		Bureaucrat(void);
		Bureaucrat(Bureaucrat const &src);
		Bureaucrat(std::string name, int grade);
		~Bureaucrat(void);

		Bureaucrat &operator=(Bureaucrat const &rhs);
		Bureaucrat operator++(int);
		Bureaucrat operator++(void);
		Bureaucrat operator--(int);
		Bureaucrat operator--(void);

		std::string get_name(void) const;
		int			get_grade(void) const;


	private:
		const std::string	_name;
		int					_grade;

		void check_exceptions(int grade);
		class GradeTooHighException : public std::exception {
			public:
				virtual const char *what() const throw();
		};
		class GradeTooLowException : public std::exception {
			public:
				virtual const char *what() const throw();
		};
};

std::ostream	&operator<<(std::ostream &stream, Bureaucrat const &rhs);

#endif

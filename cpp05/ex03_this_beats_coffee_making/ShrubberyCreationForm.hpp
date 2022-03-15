/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 07:42:59 by jofelipe          #+#    #+#             */
/*   Updated: 2022/03/15 08:03:53 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBNERYCREATIONFORM_HPP
# define SHRUBNERYCREATIONFORM_HPP

#include <iostream>
#include <fstream>
#include "Form.hpp"

class ShrubberyCreationForm : public Form {

	public:
		static int req_sign;
		static int req_exec;

		ShrubberyCreationForm(void);
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm &src);
		~ShrubberyCreationForm(void);

		const ShrubberyCreationForm &operator=(const ShrubberyCreationForm &rhs);

		virtual void enact(const Form &form) const;

	private:
		const std::string	_name;
		const int			_min_grade;
		const int			_min_exec;
		std::string			_target;
		bool				_signed;
};

#endif

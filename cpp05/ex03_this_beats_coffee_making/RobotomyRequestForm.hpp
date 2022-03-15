/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 07:42:59 by jofelipe          #+#    #+#             */
/*   Updated: 2022/03/14 15:24:50 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include "Form.hpp"
#include "ft_itoa.h"

class RobotomyRequestForm : public Form {

	public:
		static int req_sign;
		static int req_exec;

		RobotomyRequestForm(void);
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(const RobotomyRequestForm &src);
		~RobotomyRequestForm(void);

		const RobotomyRequestForm &operator=(const RobotomyRequestForm &rhs);

		virtual void enact(const Form &form) const;

	private:
		const std::string	_name;
		const int			_min_grade;
		const int			_min_exec;
		std::string			_target;
		bool				_signed;
};

#endif

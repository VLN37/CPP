/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 07:42:59 by jofelipe          #+#    #+#             */
/*   Updated: 2022/03/14 10:50:53 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include "Form.hpp"

class RobotomyRequestForm : public Form {

	public:
		static int req_sign;
		static int req_exec;

		RobotomyRequestForm(void);
		RobotomyRequestForm(const RobotomyRequestForm &src);
		~RobotomyRequestForm(void);

		const RobotomyRequestForm &operator=(const RobotomyRequestForm &rhs);

		virtual void enact(const Form &form) const;

};

#endif

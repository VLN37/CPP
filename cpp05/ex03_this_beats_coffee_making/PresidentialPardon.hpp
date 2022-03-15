/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardon.hpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 07:42:59 by jofelipe          #+#    #+#             */
/*   Updated: 2022/03/15 07:42:10 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDON_HPP
# define PRESIDENTIALPARDON_HPP

#include <iostream>
#include "Form.hpp"

class PresidentialPardon : public Form {

	public:
		static int req_sign;
		static int req_exec;

		PresidentialPardon(void);
		PresidentialPardon(std::string target);
		PresidentialPardon(const PresidentialPardon &src);
		~PresidentialPardon(void);

		const PresidentialPardon &operator=(const PresidentialPardon &rhs);

		virtual void enact(const Form &form) const;

	private:
		const std::string	_name;
		const int			_min_grade;
		const int			_min_exec;
		std::string			_target;
		bool				_signed;
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 05:52:53 by jofelipe          #+#    #+#             */
/*   Updated: 2022/03/15 06:30:28 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Form.hpp"

#define FORM_TYPES 3

class Intern {
	typedef void (Form::*funcptr)(std::string ) const;

	public:
		Intern(void);
		Intern(Intern const &intern);
		~Intern(void);

		static std::string templates[FORM_TYPES];

		const Intern &operator=(const Intern &rhs);

		Form *makeForm(std::string name, std::string target);
};

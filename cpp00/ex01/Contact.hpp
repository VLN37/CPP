/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 20:39:56 by jofelipe          #+#    #+#             */
/*   Updated: 2022/03/02 00:24:34 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>

class Contact {

	public:
		Contact(void);
		~Contact(void);
		std::string	name;
		std::string	surname;
		std::string	nickname;
		std::string	phone;
		std::string	secret;

	private:
};

#endif

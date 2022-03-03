/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 20:39:56 by jofelipe          #+#    #+#             */
/*   Updated: 2022/03/03 04:05:36 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>

class Contact {

	public:
		Contact(void);
		~Contact(void);

		std::string getname(void) const;
		std::string getsurname(void) const;
		std::string getnickname(void) const;
		std::string getphone(void) const;
		std::string getsecret(void) const;
		void		setname(std::string name);
		void		setsurname(std::string surname);
		void		setnickname(std::string nickname);
		void		setphone(std::string phone);
		void		setsecret(std::string secret);

	private:
		std::string	name;
		std::string	surname;
		std::string	nickname;
		std::string	phone;
		std::string	secret;
};

#endif

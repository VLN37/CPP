/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 20:33:28 by jofelipe          #+#    #+#             */
/*   Updated: 2022/03/03 01:17:12 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include "Contact.hpp"

class PhoneBook {

	public:
		PhoneBook(void);
		~PhoneBook(void);

		void	run(void);

	private:
		Contact	contacts[8];
		int		no_contacts;
		int		iterator;

		bool	loop(void);
		void	search(void);
		void	add(void);
		void	instructions(void) const;
		void	print_error(std::string str) const;
		void	print_format(std::string str) const;
		void	print_contact(std::string key, std::string value) const;
		bool	check_token(std::string key, std::string *ptr) const;

		void	save(Contact contact);
};

#endif
